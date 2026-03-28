#include <SDL2/SDL.h>
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

// Game Boy 오리지널 해상도
const int GB_WIDTH = 160;
const int GB_HEIGHT = 144;
// 화면이 너무 작아서 보기 힘드므로 4배 확대해서 창을 띄웁니다.
const int SCALE = 4; 

// 160x144 배열에 무작위 픽셀 데이터를 채워넣는 함수
void fillRandomPixels(std::vector<uint32_t>& pixels) {
    for (int i = 0; i < GB_WIDTH * GB_HEIGHT; ++i) {
        // 0x00RRGGBB 형식으로 랜덤 색상 생성
        uint8_t r = rand() % 256;
        uint8_t g = rand() % 256;
        uint8_t b = rand() % 256;
        pixels[i] = (r << 16) | (g << 8) | b;
    }
}

// 160x144 배열을 단일 색상으로 채우는 함수
void fillSolidColor(std::vector<uint32_t>& pixels, uint32_t color) {
    for (int i = 0; i < GB_WIDTH * GB_HEIGHT; ++i) {
        pixels[i] = color;
    }
}

int main(int argc, char* args[]) {
    // 1. 랜덤 시드 초기화
    std::srand(std::time(nullptr));

    // 2. SDL 초기화 (비디오 시스템만 켭니다)
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        std::cerr << "SDL 초기화 실패: " << SDL_GetError() << std::endl;
        return 1;
    }

    // 3. 창(Window) 생성 (실제 모니터에 보이는 창 크기는 160*4 x 144*4)
    SDL_Window* window = SDL_CreateWindow(
        "Game Boy SDL Test",         // 창 제목
        SDL_WINDOWPOS_CENTERED,      // X 위치 (중앙)
        SDL_WINDOWPOS_CENTERED,      // Y 위치 (중앙)
        GB_WIDTH * SCALE,            // 창 너비 (640)
        GB_HEIGHT * SCALE,           // 창 높이 (576)
        SDL_WINDOW_SHOWN             // 창 표시 옵션
    );

    if (!window) {
        std::cerr << "Window 생성 실패: " << SDL_GetError() << std::endl;
        SDL_Quit();
        return 1;
    }

    // 4. 렌더러(Renderer) 생성 (창에 그림을 그리는 도구)
    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    
    // 5. 텍스처(Texture) 생성 (160x144 크기의 가상 도화지)
    SDL_Texture* texture = SDL_CreateTexture(
        renderer,
        SDL_PIXELFORMAT_ARGB8888,    // 픽셀 포맷 (Alpha, Red, Green, Blue 각각 8비트)
        SDL_TEXTUREACCESS_STREAMING, // CPU에서 픽셀 데이터를 자주 업데이트할 때 쓰는 옵션
        GB_WIDTH,
        GB_HEIGHT
    );

    // 6. 실제 픽셀 데이터를 담을 배열 (160 * 144 크기, 각 픽셀은 32비트 정수)
    std::vector<uint32_t> pixels(GB_WIDTH * GB_HEIGHT);

    // 처음엔 랜덤 화면으로 채움
    fillRandomPixels(pixels);

    // 7. 메인 루프 (프로그램이 종료될 때까지 무한 반복)
    bool isRunning = true;
    SDL_Event event;

    while (isRunning) {
        // 8. 이벤트 처리 (키보드 입력, 마우스 클릭, 창 닫기 등)
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) {
                isRunning = false; // 창의 X 버튼을 누르면 종료
            }
            else if (event.type == SDL_KEYDOWN) {
                // 키보드가 눌렸을 때
                switch (event.key.keysym.sym) {
                    case SDLK_SPACE:
                        // 스페이스바: 화면을 빨간색(0x00FF0000)으로 덮음
                        fillSolidColor(pixels, 0x00FF0000);
                        break;
                    case SDLK_RETURN:
                        // 엔터키: 화면을 다시 랜덤 노이즈로 덮음
                        fillRandomPixels(pixels);
                        break;
                    case SDLK_ESCAPE:
                        // ESC키: 프로그램 종료
                        isRunning = false;
                        break;
                }
            }
        }

        // 9. 변경된 픽셀 데이터를 텍스처(도화지)에 복사
        SDL_UpdateTexture(texture, nullptr, pixels.data(), GB_WIDTH * sizeof(uint32_t));

        // 10. 렌더러 초기화 및 도화지를 창 크기에 맞춰 확대해서 복사
        SDL_RenderClear(renderer);
        SDL_RenderCopy(renderer, texture, nullptr, nullptr);
        
        // 11. 화면에 최종 출력
        SDL_RenderPresent(renderer);

        // CPU를 100% 쓰지 않도록 약간의 딜레이 (약 60FPS 타겟)
        SDL_Delay(16);
    }

    // 12. 메모리 정리 및 종료
    SDL_DestroyTexture(texture);
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}