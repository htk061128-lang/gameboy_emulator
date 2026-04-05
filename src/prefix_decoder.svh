    if(prefix_valid) begin //prefix instruction 전용 제어신호 발생 로직.
      case(opcode[7:6])
        2'b00: begin
          case(opcode[5:3])
            3'b000: begin //rlc r8 (Rotate Left Circular) 비트를 왼쪽으로 밀고, 삐져나온 비트를 Carry flag와 0번 비트에 동시에 넣음.
              if(opcode[2:0] == 6) begin //rlc (HL)일때. 총 16 T-cycle(4 M-cycle)이 걸리는 명령어임.
                case(T_clk_counter)
                  0: begin //T4 에지
                    T_clk_counter_next = 1;
                    next_main_state = EXECUTE_prefix;
                  end
                  1: begin //T1 에지 (M3 에지)
                    T_clk_counter_next = 2;
                    next_main_state = EXECUTE_prefix;
                  end
                  2: begin //T2 에지
                    T_clk_counter_next = 3;
                    next_main_state = EXECUTE_prefix;
                    mem_control_r_ena = 1; //T3에지에서 mem_control_r_data가 나오고 유지되다가 T2에지 직전에 mem_control_w_data를 결정하기 위해 사용됨. mem_out_reg가 그동안 바뀌면 절대 안됨!!!
                    mem_control_ad = {H, L};
                  end
                  3: begin //T3 에지
                    T_clk_counter_next = 4;
                    next_main_state = EXECUTE_prefix;
                  end
                  4: begin //T4 에지
                    T_clk_counter_next = 5;
                    next_main_state = EXECUTE_prefix;
                  end
                  5: begin //T1 에지 (M4 에지)
                    T_clk_counter_next = 6;
                    next_main_state = EXECUTE_prefix;
                  end
                  6: begin //T2 에지
                    T_clk_counter_next = 7;
                    next_main_state = EXECUTE_prefix;
                    mem_control_w_ena = 1;
                    mem_control_ad = {H, L};
                    mem_control_w_data = {mem_control_r_data[6:0], mem_control_r_data[7]}; //F 레지스터 업데이트는 마지막 T4에지에서 함. 주의.
                    tem_reg_w_ena = 1; //(HL)에 저장할 mem_control_w_data를 tem_reg에 저장함으로써 나중에 T4에지에서 zero flag를 바꾸는게 가능해짐.
                    tem_reg_w_data = mem_control_w_data; 
                  end
                  7: begin //T3 에지
                    T_clk_counter_next = 8;
                    next_main_state = EXECUTE_prefix;
                  end
                  8: begin //T4 에지
                    reg_w_ena = 1;
                    reg_ad = 2; //F에 쓸거임.
                    reg_w_data[7:0] = {(tem_reg[7:0] == 0), 1'b0, 1'b0, mem_control_r_data[0], 4'b0000}; //mem_control_r_data는 다음 메모리 입출력전까지 유지되기 떄문에 M3의 T3에지에서 나온 값을 M4의 T4에지 에도 사용할수 있음. mem_control_w_data는 절대 이렇게 사용하면 안됨. tem_reg에 저장했다가 나중에 사용하던지 해야 함.
                    tem_reg_w_ena = 1;
                    tem_reg_w_data = 0; //나중에 파형볼때 편하라고 명령어실행이 끝날때 tem_reg를 0으로 초기화 해줌. 굳이 할 필요는 없긴 함.
                    PC_plus_ena = 1;
                    if(((IE[4:0] & IF[4:0]) != 5'b0) && IME) begin
                      next_main_state = INTERRUPT;
                      T_clk_counter_next = 1;
                    end
                    else begin
                      next_main_state = fetch_T1;
                    end
                  end
                endcase
              end
              else begin
                reg_w_ena = 1;
                reg_ad = Operand_r8_ad;
                reg_w_data[7:0] = {Operand_r8[6:0], Operand_r8[7]};
                reg_ad_2 = 2; //carry flag를 변화시켜야 하므로 F에 쓸거임.
                reg_w_data_2[7:0] = {(reg_w_data[7:0] == 0), 1'b0, 1'b0, Operand_r8[7], 4'b0000}; //blocking 이므로 reg_w_data[7:0]에 결과값이 들어가고 그게 reg_w_data_2에 반영되는 구조라 이렇게 써도 문제없음.
                PC_plus_ena = 1; //PC 증가신호
                if(((IE[4:0] & IF[4:0]) != 5'b0) && IME) begin
                  next_main_state = INTERRUPT;
                  T_clk_counter_next = 1; //T4에지에서 main_state가 INTERRUPT로 바뀌는 동시에 T_clk_counter도 1로 설정됨.
                end
                else begin
                  next_main_state = fetch_T1;
                end
              end
            end
            3'b001: begin //rrc r8 (Rotate Right Circular) 비트를 오른쪽으로 밀고, 삐져나온 비트를 Carry와 7번 비트에 동시에 넣음.
              if(opcode[2:0] == 6) begin //rrc (HL)일때. 총 16 T-cycle이 걸리는 명령어임.
                case(T_clk_counter)
                  0: begin //T4 에지
                    T_clk_counter_next = 1;
                    next_main_state = EXECUTE_prefix;
                  end
                  1: begin //T1 에지 (M3 에지)
                    T_clk_counter_next = 2;
                    next_main_state = EXECUTE_prefix;
                  end
                  2: begin //T2 에지
                    T_clk_counter_next = 3;
                    next_main_state = EXECUTE_prefix;
                    mem_control_r_ena = 1; 
                    mem_control_ad = {H, L};
                  end
                  3: begin //T3 에지
                    T_clk_counter_next = 4;
                    next_main_state = EXECUTE_prefix;
                  end
                  4: begin //T4 에지
                    T_clk_counter_next = 5;
                    next_main_state = EXECUTE_prefix;
                  end
                  5: begin //T1 에지 (M4 에지)
                    T_clk_counter_next = 6;
                    next_main_state = EXECUTE_prefix;
                  end
                  6: begin //T2 에지
                    T_clk_counter_next = 7;
                    next_main_state = EXECUTE_prefix;
                    mem_control_w_ena = 1;
                    mem_control_ad = {H, L};
                    mem_control_w_data = {mem_control_r_data[0], mem_control_r_data[7:1]}; //F 레지스터 업데이트는 마지막 T4에지에서 함. 주의.
                    tem_reg_w_ena = 1; //(HL)에 저장할 mem_control_w_data를 tem_reg에 저장함으로써 나중에 T4에지에서 zero flag를 바꾸는게 가능해짐.
                    tem_reg_w_data = mem_control_w_data; 
                  end
                  7: begin //T3 에지
                    T_clk_counter_next = 8;
                    next_main_state = EXECUTE_prefix;
                  end
                  8: begin //T4 에지
                    reg_w_ena = 1;
                    reg_ad = 2; //F에 쓸거임.
                    reg_w_data[7:0] = {(tem_reg[7:0] == 0), 1'b0, 1'b0, mem_control_r_data[0], 4'b0000}; 
                    tem_reg_w_ena = 1;
                    tem_reg_w_data = 0; //나중에 파형볼때 편하라고 명령어실행이 끝날때 tem_reg를 0으로 초기화 해줌. 굳이 할 필요는 없긴 함.
                    PC_plus_ena = 1;
                    if(((IE[4:0] & IF[4:0]) != 5'b0) && IME) begin
                      next_main_state = INTERRUPT;
                      T_clk_counter_next = 1;
                    end
                    else begin
                      next_main_state = fetch_T1;
                    end
                  end
                endcase
              end
              else begin
                reg_w_ena = 1;
                reg_ad = Operand_r8_ad;
                reg_w_data[7:0] = {Operand_r8[0], Operand_r8[7:1]};
                reg_ad_2 = 2; //carry flag를 변화시켜야 하므로 F에 쓸거임.
                reg_w_data_2[7:0] = {(reg_w_data[7:0] == 0), 1'b0, 1'b0, Operand_r8[0], 4'b0000};
                PC_plus_ena = 1; //PC 증가신호
                if(((IE[4:0] & IF[4:0]) != 5'b0) && IME) begin
                  next_main_state = INTERRUPT;
                  T_clk_counter_next = 1; //T4에지에서 main_state가 INTERRUPT로 바뀌는 동시에 T_clk_counter도 1로 설정됨.
                end
                else begin
                  next_main_state = fetch_T1;
                end
              end
            end
            3'b010: begin //rl r8 (Rotate Left) Carry를 포함해 9비트가 회전함 (Carry -> 0번, 7번 -> Carry).
              if(opcode[2:0] == 6) begin //rl (HL)일때. 총 16 T-cycle이 걸리는 명령어임.
                case(T_clk_counter)
                  0: begin //T4 에지
                    T_clk_counter_next = 1;
                    next_main_state = EXECUTE_prefix;
                  end
                  1: begin //T1 에지 (M3 에지)
                    T_clk_counter_next = 2;
                    next_main_state = EXECUTE_prefix;
                  end
                  2: begin //T2 에지
                    T_clk_counter_next = 3;
                    next_main_state = EXECUTE_prefix;
                    mem_control_r_ena = 1; //T3에지에서 mem_control_r_data가 나오고 유지되다가 T2에지 직전에 mem_control_w_data를 결정하기 위해 사용됨. mem_out_reg가 그동안 바뀌면 절대 안됨!!!
                    mem_control_ad = {H, L};
                  end
                  3: begin //T3 에지
                    T_clk_counter_next = 4;
                    next_main_state = EXECUTE_prefix;
                  end
                  4: begin //T4 에지
                    T_clk_counter_next = 5;
                    next_main_state = EXECUTE_prefix;
                  end
                  5: begin //T1 에지 (M4 에지)
                    T_clk_counter_next = 6;
                    next_main_state = EXECUTE_prefix;
                  end
                  6: begin //T2 에지
                    T_clk_counter_next = 7;
                    next_main_state = EXECUTE_prefix;
                    mem_control_w_ena = 1;
                    mem_control_ad = {H, L};
                    mem_control_w_data = {mem_control_r_data[6:0], F[4]}; //F 레지스터 업데이트는 마지막 T4에지에서 함. 주의.
                    tem_reg_w_ena = 1; //(HL)에 저장할 mem_control_w_data를 tem_reg에 저장함으로써 나중에 T4에지에서 zero flag를 바꾸는게 가능해짐.
                    tem_reg_w_data = mem_control_w_data; 
                  end
                  7: begin //T3 에지
                    T_clk_counter_next = 8;
                    next_main_state = EXECUTE_prefix;
                  end
                  8: begin //T4 에지
                    reg_w_ena = 1;
                    reg_ad = 2; //F에 쓸거임.
                    reg_w_data[7:0] = {(tem_reg[7:0] == 0), 1'b0, 1'b0, mem_control_r_data[7], 4'b0000}; //mem_control_r_data는 다음 메모리 입출력전까지 유지되기 떄문에 M3의 T3에지에서 나온 값을 M4의 T4에지 에도 사용할수 있음. mem_control_w_data는 절대 이렇게 사용하면 안됨. tem_reg에 저장했다가 나중에 사용하던지 해야 함.
                    tem_reg_w_ena = 1;
                    tem_reg_w_data = 0; //나중에 파형볼때 편하라고 명령어실행이 끝날때 tem_reg를 0으로 초기화 해줌. 굳이 할 필요는 없긴 함.
                    PC_plus_ena = 1;
                    if(((IE[4:0] & IF[4:0]) != 5'b0) && IME) begin
                      next_main_state = INTERRUPT;
                      T_clk_counter_next = 1;
                    end
                    else begin
                      next_main_state = fetch_T1;
                    end
                  end
                endcase
              end
              else begin
                reg_w_ena = 1;
                reg_ad = Operand_r8_ad;
                reg_w_data[7:0] = {Operand_r8[6:0], F[4]}; //F[4]는 carry flag임.
                reg_ad_2 = 2; //carry flag를 변화시켜야 하므로 F에 쓸거임.
                reg_w_data_2[7:0] = {(reg_w_data[7:0] == 0), 1'b0, 1'b0, Operand_r8[7], 4'b0000};
                PC_plus_ena = 1; //PC 증가신호
                if(((IE[4:0] & IF[4:0]) != 5'b0) && IME) begin
                  next_main_state = INTERRUPT;
                  T_clk_counter_next = 1; //T4에지에서 main_state가 INTERRUPT로 바뀌는 동시에 T_clk_counter도 1로 설정됨.
                end
                else begin
                  next_main_state = fetch_T1;
                end
              end
            end
            3'b011: begin //rr r8 (Rotate Right) Carry를 포함해 9비트가 회전함 (Carry -> 7번, 0번 -> Carry).
              if(opcode[2:0] == 6) begin //rr (HL)일때. 총 16 T-cycle이 걸리는 명령어임.
                case(T_clk_counter)
                  0: begin //T4 에지
                    T_clk_counter_next = 1;
                    next_main_state = EXECUTE_prefix;
                  end
                  1: begin //T1 에지 (M3 에지)
                    T_clk_counter_next = 2;
                    next_main_state = EXECUTE_prefix;
                  end
                  2: begin //T2 에지
                    T_clk_counter_next = 3;
                    next_main_state = EXECUTE_prefix;
                    mem_control_r_ena = 1; //T3에지에서 mem_control_r_data가 나오고 유지되다가 T2에지 직전에 mem_control_w_data를 결정하기 위해 사용됨. mem_out_reg가 그동안 바뀌면 절대 안됨!!!
                    mem_control_ad = {H, L};
                  end
                  3: begin //T3 에지
                    T_clk_counter_next = 4;
                    next_main_state = EXECUTE_prefix;
                  end
                  4: begin //T4 에지
                    T_clk_counter_next = 5;
                    next_main_state = EXECUTE_prefix;
                  end
                  5: begin //T1 에지 (M4 에지)
                    T_clk_counter_next = 6;
                    next_main_state = EXECUTE_prefix;
                  end
                  6: begin //T2 에지
                    T_clk_counter_next = 7;
                    next_main_state = EXECUTE_prefix;
                    mem_control_w_ena = 1;
                    mem_control_ad = {H, L};
                    mem_control_w_data = {F[4], mem_control_r_data[7:1]}; //F 레지스터 업데이트는 마지막 T4에지에서 함. 주의.
                    tem_reg_w_ena = 1; //(HL)에 저장할 mem_control_w_data를 tem_reg에 저장함으로써 나중에 T4에지에서 zero flag를 바꾸는게 가능해짐.
                    tem_reg_w_data = mem_control_w_data; 
                  end
                  7: begin //T3 에지
                    T_clk_counter_next = 8;
                    next_main_state = EXECUTE_prefix;
                  end
                  8: begin //T4 에지
                    reg_w_ena = 1;
                    reg_ad = 2; //F에 쓸거임.
                    reg_w_data[7:0] = {(tem_reg[7:0] == 0), 1'b0, 1'b0, mem_control_r_data[0], 4'b0000}; //mem_control_r_data는 다음 메모리 입출력전까지 유지되기 떄문에 M3의 T3에지에서 나온 값을 M4의 T4에지 에도 사용할수 있음. mem_control_w_data는 절대 이렇게 사용하면 안됨. tem_reg에 저장했다가 나중에 사용하던지 해야 함.
                    tem_reg_w_ena = 1;
                    tem_reg_w_data = 0; //나중에 파형볼때 편하라고 명령어실행이 끝날때 tem_reg를 0으로 초기화 해줌. 굳이 할 필요는 없긴 함.
                    PC_plus_ena = 1;
                    if(((IE[4:0] & IF[4:0]) != 5'b0) && IME) begin
                      next_main_state = INTERRUPT;
                      T_clk_counter_next = 1;
                    end
                    else begin
                      next_main_state = fetch_T1;
                    end
                  end
                endcase
              end
              else begin
                reg_w_ena = 1;
                reg_ad = Operand_r8_ad;
                reg_w_data[7:0] = {F[4], Operand_r8[7:1]}; //F[4]는 carry flag임.
                reg_ad_2 = 2; //carry flag를 변화시켜야 하므로 F에 쓸거임.
                reg_w_data_2[7:0] = {(reg_w_data[7:0] == 0), 1'b0, 1'b0, Operand_r8[0], 4'b0000};
                PC_plus_ena = 1; //PC 증가신호
                if(((IE[4:0] & IF[4:0]) != 5'b0) && IME) begin
                  next_main_state = INTERRUPT;
                  T_clk_counter_next = 1; //T4에지에서 main_state가 INTERRUPT로 바뀌는 동시에 T_clk_counter도 1로 설정됨.
                end
                else begin
                  next_main_state = fetch_T1;
                end
              end
            end
            3'b100: begin //sla r8 (Shift Left Arithmetic) 왼쪽으로 밀고 0번 비트는 0으로 채움. (산술 곱셈)
              if(opcode[2:0] == 6) begin //sla (HL)일때. 총 16 T-cycle이 걸리는 명령어임.
                case(T_clk_counter)
                  0: begin //T4 에지
                    T_clk_counter_next = 1;
                    next_main_state = EXECUTE_prefix;
                  end
                  1: begin //T1 에지 (M3 에지)
                    T_clk_counter_next = 2;
                    next_main_state = EXECUTE_prefix;
                  end
                  2: begin //T2 에지
                    T_clk_counter_next = 3;
                    next_main_state = EXECUTE_prefix;
                    mem_control_r_ena = 1; //T3에지에서 mem_control_r_data가 나오고 유지되다가 T2에지 직전에 mem_control_w_data를 결정하기 위해 사용됨. mem_out_reg가 그동안 바뀌면 절대 안됨!!!
                    mem_control_ad = {H, L};
                  end
                  3: begin //T3 에지
                    T_clk_counter_next = 4;
                    next_main_state = EXECUTE_prefix;
                  end
                  4: begin //T4 에지
                    T_clk_counter_next = 5;
                    next_main_state = EXECUTE_prefix;
                  end
                  5: begin //T1 에지 (M4 에지)
                    T_clk_counter_next = 6;
                    next_main_state = EXECUTE_prefix;
                  end
                  6: begin //T2 에지
                    T_clk_counter_next = 7;
                    next_main_state = EXECUTE_prefix;
                    mem_control_w_ena = 1;
                    mem_control_ad = {H, L};
                    mem_control_w_data = {mem_control_r_data[6:0], 1'b0}; //F 레지스터 업데이트는 마지막 T4에지에서 함. 주의.
                    tem_reg_w_ena = 1; //(HL)에 저장할 mem_control_w_data를 tem_reg에 저장함으로써 나중에 T4에지에서 zero flag를 바꾸는게 가능해짐.
                    tem_reg_w_data = mem_control_w_data; 
                  end
                  7: begin //T3 에지
                    T_clk_counter_next = 8;
                    next_main_state = EXECUTE_prefix;
                  end
                  8: begin //T4 에지
                    reg_w_ena = 1;
                    reg_ad = 2; //F에 쓸거임.
                    reg_w_data[7:0] = {(tem_reg[7:0] == 0), 1'b0, 1'b0, mem_control_r_data[7], 4'b0000}; //mem_control_r_data는 다음 메모리 입출력전까지 유지되기 떄문에 M3의 T3에지에서 나온 값을 M4의 T4에지 에도 사용할수 있음. mem_control_w_data는 절대 이렇게 사용하면 안됨. tem_reg에 저장했다가 나중에 사용하던지 해야 함.
                    tem_reg_w_ena = 1;
                    tem_reg_w_data = 0; //나중에 파형볼때 편하라고 명령어실행이 끝날때 tem_reg를 0으로 초기화 해줌. 굳이 할 필요는 없긴 함.
                    PC_plus_ena = 1;
                    if(((IE[4:0] & IF[4:0]) != 5'b0) && IME) begin
                      next_main_state = INTERRUPT;
                      T_clk_counter_next = 1;
                    end
                    else begin
                      next_main_state = fetch_T1;
                    end
                  end
                endcase
              end
              else begin
                reg_w_ena = 1;
                reg_ad = Operand_r8_ad;
                reg_w_data[7:0] = {Operand_r8[6:0], 1'b0};
                reg_ad_2 = 2; //carry flag를 변화시켜야 하므로 F에 쓸거임.
                reg_w_data_2[7:0] = {(reg_w_data[7:0] == 0), 1'b0, 1'b0, Operand_r8[7], 4'b0000};
                PC_plus_ena = 1; //PC 증가신호
                if(((IE[4:0] & IF[4:0]) != 5'b0) && IME) begin
                  next_main_state = INTERRUPT;
                  T_clk_counter_next = 1; //T4에지에서 main_state가 INTERRUPT로 바뀌는 동시에 T_clk_counter도 1로 설정됨.
                end
                else begin
                  next_main_state = fetch_T1;
                end
              end
            end
            3'b101: begin //sra r8 (Shift Right Arithmetic) 오른쪽으로 밀고 7번 비트는 원래 값 유지. (부호 있는 나눗셈)
              if(opcode[2:0] == 6) begin //sra (HL)일때. 총 16 T-cycle이 걸리는 명령어임.
                case(T_clk_counter)
                  0: begin //T4 에지
                    T_clk_counter_next = 1;
                    next_main_state = EXECUTE_prefix;
                  end
                  1: begin //T1 에지 (M3 에지)
                    T_clk_counter_next = 2;
                    next_main_state = EXECUTE_prefix;
                  end
                  2: begin //T2 에지
                    T_clk_counter_next = 3;
                    next_main_state = EXECUTE_prefix;
                    mem_control_r_ena = 1; //T3에지에서 mem_control_r_data가 나오고 유지되다가 T2에지 직전에 mem_control_w_data를 결정하기 위해 사용됨. mem_out_reg가 그동안 바뀌면 절대 안됨!!!
                    mem_control_ad = {H, L};
                  end
                  3: begin //T3 에지
                    T_clk_counter_next = 4;
                    next_main_state = EXECUTE_prefix;
                  end
                  4: begin //T4 에지
                    T_clk_counter_next = 5;
                    next_main_state = EXECUTE_prefix;
                  end
                  5: begin //T1 에지 (M4 에지)
                    T_clk_counter_next = 6;
                    next_main_state = EXECUTE_prefix;
                  end
                  6: begin //T2 에지
                    T_clk_counter_next = 7;
                    next_main_state = EXECUTE_prefix;
                    mem_control_w_ena = 1;
                    mem_control_ad = {H, L};
                    mem_control_w_data = {mem_control_r_data[7], mem_control_r_data[7:1]}; //F 레지스터 업데이트는 마지막 T4에지에서 함. 주의.
                    tem_reg_w_ena = 1; //(HL)에 저장할 mem_control_w_data를 tem_reg에 저장함으로써 나중에 T4에지에서 zero flag를 바꾸는게 가능해짐.
                    tem_reg_w_data = mem_control_w_data; 
                  end
                  7: begin //T3 에지
                    T_clk_counter_next = 8;
                    next_main_state = EXECUTE_prefix;
                  end
                  8: begin //T4 에지
                    reg_w_ena = 1;
                    reg_ad = 2; //F에 쓸거임.
                    reg_w_data[7:0] = {(tem_reg[7:0] == 0), 1'b0, 1'b0, mem_control_r_data[0], 4'b0000}; //mem_control_r_data는 다음 메모리 입출력전까지 유지되기 떄문에 M3의 T3에지에서 나온 값을 M4의 T4에지 에도 사용할수 있음. mem_control_w_data는 절대 이렇게 사용하면 안됨. tem_reg에 저장했다가 나중에 사용하던지 해야 함.
                    tem_reg_w_ena = 1;
                    tem_reg_w_data = 0; //나중에 파형볼때 편하라고 명령어실행이 끝날때 tem_reg를 0으로 초기화 해줌. 굳이 할 필요는 없긴 함.
                    PC_plus_ena = 1;
                    if(((IE[4:0] & IF[4:0]) != 5'b0) && IME) begin
                      next_main_state = INTERRUPT;
                      T_clk_counter_next = 1;
                    end
                    else begin
                      next_main_state = fetch_T1;
                    end
                  end
                endcase
              end
              else begin
                reg_w_ena = 1;
                reg_ad = Operand_r8_ad;
                reg_w_data[7:0] = {Operand_r8[7], Operand_r8[7:1]};
                reg_ad_2 = 2; //carry flag를 변화시켜야 하므로 F에 쓸거임.
                reg_w_data_2[7:0] = {(reg_w_data[7:0] == 0), 1'b0, 1'b0, Operand_r8[0], 4'b0000};
                PC_plus_ena = 1; //PC 증가신호
                if(((IE[4:0] & IF[4:0]) != 5'b0) && IME) begin
                  next_main_state = INTERRUPT;
                  T_clk_counter_next = 1; //T4에지에서 main_state가 INTERRUPT로 바뀌는 동시에 T_clk_counter도 1로 설정됨.
                end
                else begin
                  next_main_state = fetch_T1;
                end
              end
            end
            3'b110: begin //swap r8	(Swap Nibbles) 상위 4비트와 하위 4비트를 통째로 교체함. (게임보이 특유 명령어)
              if(opcode[2:0] == 6) begin //swap (HL)일때. 총 16 T-cycle이 걸리는 명령어임.
                case(T_clk_counter)
                  0: begin //T4 에지
                    T_clk_counter_next = 1;
                    next_main_state = EXECUTE_prefix;
                  end
                  1: begin //T1 에지 (M3 에지)
                    T_clk_counter_next = 2;
                    next_main_state = EXECUTE_prefix;
                  end
                  2: begin //T2 에지
                    T_clk_counter_next = 3;
                    next_main_state = EXECUTE_prefix;
                    mem_control_r_ena = 1; //T3에지에서 mem_control_r_data가 나오고 유지되다가 T2에지 직전에 mem_control_w_data를 결정하기 위해 사용됨. mem_out_reg가 그동안 바뀌면 절대 안됨!!!
                    mem_control_ad = {H, L};
                  end
                  3: begin //T3 에지
                    T_clk_counter_next = 4;
                    next_main_state = EXECUTE_prefix;
                  end
                  4: begin //T4 에지
                    T_clk_counter_next = 5;
                    next_main_state = EXECUTE_prefix;
                  end
                  5: begin //T1 에지 (M4 에지)
                    T_clk_counter_next = 6;
                    next_main_state = EXECUTE_prefix;
                  end
                  6: begin //T2 에지
                    T_clk_counter_next = 7;
                    next_main_state = EXECUTE_prefix;
                    mem_control_w_ena = 1;
                    mem_control_ad = {H, L};
                    mem_control_w_data = {mem_control_r_data[3:0], mem_control_r_data[7:4]}; //F 레지스터 업데이트는 마지막 T4에지에서 함. 주의.
                    tem_reg_w_ena = 1; //(HL)에 저장할 mem_control_w_data를 tem_reg에 저장함으로써 나중에 T4에지에서 zero flag를 바꾸는게 가능해짐.
                    tem_reg_w_data = mem_control_w_data; 
                  end
                  7: begin //T3 에지
                    T_clk_counter_next = 8;
                    next_main_state = EXECUTE_prefix;
                  end
                  8: begin //T4 에지
                    reg_w_ena = 1;
                    reg_ad = 2; //F에 쓸거임.
                    reg_w_data[7:0] = {(tem_reg[7:0] == 0), 1'b0, 1'b0, 1'b0, 4'b0000}; //mem_control_r_data는 다음 메모리 입출력전까지 유지되기 떄문에 M3의 T3에지에서 나온 값을 M4의 T4에지 에도 사용할수 있음. mem_control_w_data는 절대 이렇게 사용하면 안됨. tem_reg에 저장했다가 나중에 사용하던지 해야 함.
                    tem_reg_w_ena = 1;
                    tem_reg_w_data = 0; //나중에 파형볼때 편하라고 명령어실행이 끝날때 tem_reg를 0으로 초기화 해줌. 굳이 할 필요는 없긴 함.
                    PC_plus_ena = 1;
                    if(((IE[4:0] & IF[4:0]) != 5'b0) && IME) begin
                      next_main_state = INTERRUPT;
                      T_clk_counter_next = 1;
                    end
                    else begin
                      next_main_state = fetch_T1;
                    end
                  end
                endcase
              end
              else begin
                reg_w_ena = 1;
                reg_ad = Operand_r8_ad;
                reg_w_data[7:0] = {Operand_r8[3:0], Operand_r8[7:4]};
                reg_ad_2 = 2; //carry flag를 변화시켜야 하므로 F에 쓸거임.
                reg_w_data_2[7:0] = {(reg_w_data[7:0] == 0), 1'b0, 1'b0, 1'b0, 4'b0000};
                PC_plus_ena = 1; //PC 증가신호
                if(((IE[4:0] & IF[4:0]) != 5'b0) && IME) begin
                  next_main_state = INTERRUPT;
                  T_clk_counter_next = 1; //T4에지에서 main_state가 INTERRUPT로 바뀌는 동시에 T_clk_counter도 1로 설정됨.
                end
                else begin
                  next_main_state = fetch_T1;
                  T_clk_counter_next = 0;
                end
              end
            end
            3'b111: begin //srl r8 (Shift Right Logical) 오른쪽으로 밀고 7번 비트는 0으로 채움. (부호 없는 나눗셈)
              if(opcode[2:0] == 6) begin //srl (HL)일때. 총 16 T-cycle이 걸리는 명령어임.
                case(T_clk_counter)
                  0: begin //T4 에지
                    T_clk_counter_next = 1;
                    next_main_state = EXECUTE_prefix;
                  end
                  1: begin //T1 에지 (M3 에지)
                    T_clk_counter_next = 2;
                    next_main_state = EXECUTE_prefix;
                  end
                  2: begin //T2 에지
                    T_clk_counter_next = 3;
                    next_main_state = EXECUTE_prefix;
                    mem_control_r_ena = 1; //T3에지에서 mem_control_r_data가 나오고 유지되다가 T2에지 직전에 mem_control_w_data를 결정하기 위해 사용됨. mem_out_reg가 그동안 바뀌면 절대 안됨!!!
                    mem_control_ad = {H, L};
                  end
                  3: begin //T3 에지
                    T_clk_counter_next = 4;
                    next_main_state = EXECUTE_prefix;
                  end
                  4: begin //T4 에지
                    T_clk_counter_next = 5;
                    next_main_state = EXECUTE_prefix;
                  end
                  5: begin //T1 에지 (M4 에지)
                    T_clk_counter_next = 6;
                    next_main_state = EXECUTE_prefix;
                  end
                  6: begin //T2 에지
                    T_clk_counter_next = 7;
                    next_main_state = EXECUTE_prefix;
                    mem_control_w_ena = 1;
                    mem_control_ad = {H, L};
                    mem_control_w_data = {1'b0, mem_control_r_data[7:1]}; //F 레지스터 업데이트는 마지막 T4에지에서 함. 주의.
                    tem_reg_w_ena = 1; //(HL)에 저장할 mem_control_w_data를 tem_reg에 저장함으로써 나중에 T4에지에서 zero flag를 바꾸는게 가능해짐.
                    tem_reg_w_data = mem_control_w_data; 
                  end
                  7: begin //T3 에지
                    T_clk_counter_next = 8;
                    next_main_state = EXECUTE_prefix;
                  end
                  8: begin //T4 에지
                    reg_w_ena = 1;
                    reg_ad = 2; //F에 쓸거임.
                    reg_w_data[7:0] = {(tem_reg[7:0] == 0), 1'b0, 1'b0, mem_control_r_data[0], 4'b0000}; //mem_control_r_data는 다음 메모리 입출력전까지 유지되기 떄문에 M3의 T3에지에서 나온 값을 M4의 T4에지 에도 사용할수 있음. mem_control_w_data는 절대 이렇게 사용하면 안됨. tem_reg에 저장했다가 나중에 사용하던지 해야 함.
                    tem_reg_w_ena = 1;
                    tem_reg_w_data = 0; //나중에 파형볼때 편하라고 명령어실행이 끝날때 tem_reg를 0으로 초기화 해줌. 굳이 할 필요는 없긴 함.
                    PC_plus_ena = 1;
                    if(((IE[4:0] & IF[4:0]) != 5'b0) && IME) begin
                      next_main_state = INTERRUPT;
                      T_clk_counter_next = 1;
                    end
                    else begin
                      next_main_state = fetch_T1;
                    end
                  end
                endcase
              end
              else begin
                reg_w_ena = 1;
                reg_ad = Operand_r8_ad;
                reg_w_data[7:0] = {1'b0, Operand_r8[7:1]};
                reg_ad_2 = 2; //carry flag를 변화시켜야 하므로 F에 쓸거임.
                reg_w_data_2[7:0] = {(reg_w_data[7:0] == 0), 1'b0, 1'b0, Operand_r8[0], 4'b0000};
                PC_plus_ena = 1; //PC 증가신호
                if(((IE[4:0] & IF[4:0]) != 5'b0) && IME) begin
                  next_main_state = INTERRUPT;
                  T_clk_counter_next = 1; //T4에지에서 main_state가 INTERRUPT로 바뀌는 동시에 T_clk_counter도 1로 설정됨.
                end
                else begin
                  next_main_state = fetch_T1;
                end
              end
            end
          endcase
        end
        2'b01: begin //BIT b3, r8
          if(opcode[5:3] == 6) begin //bit b3, (HL)일때. 메모리 읽기 때문에 총 12 T-cycle이 걸림.
            case(T_clk_counter)
              0: begin //T4 에지
                T_clk_counter_next = 1;
                next_main_state = EXECUTE_prefix;
              end
              1: begin //T1 에지 (M3 에지)
                T_clk_counter_next = 2;
                next_main_state = EXECUTE_prefix;
              end
              2: begin //T2 에지
                T_clk_counter_next = 3;
                next_main_state = EXECUTE_prefix;
                mem_control_r_ena = 1;
                mem_control_ad = {H, L};
              end
              3: begin //T3 에지
                T_clk_counter_next = 4;
                next_main_state = EXECUTE_prefix;
              end
              4: begin //T4 에지
                reg_w_ena = 1;
                reg_ad = 2; //F레지스터만 수정해야 함. flag만 바꿔줌.
                reg_w_data[7:0] = {(mem_control_r_data[opcode[5:3]] == 0), 1'b0, 1'b1, F[4], 4'b0000};
                PC_plus_ena = 1; //PC 1 증가
                if(((IE[4:0] & IF[4:0]) != 5'b0) && IME) begin
                  next_main_state = INTERRUPT;
                  T_clk_counter_next = 1;
                end
                else begin
                  next_main_state = fetch_T1;
                end
              end
            endcase
          end
          else begin
            reg_w_ena = 1;
            reg_ad = 2; //F만 바꿔주는 명령어임. Operand_r8의 opcode[5:3]번 비트가 1이면 zero flag를 0, 0이면 zero flag를 1로 설정함.
            reg_w_data[7:0] = {(Operand_r8[opcode[5:3]] == 0), 1'b0, 1'b1, F[4], 4'b0000}; //carry flag는 unmodified임.
            PC_plus_ena = 1; //PC 1 증가.
            if(((IE[4:0] & IF[4:0]) != 5'b0) && IME) begin
              next_main_state = INTERRUPT;
              T_clk_counter_next = 1;
            end
            else begin
              next_main_state = fetch_T1;
            end
          end
        end
        2'b10: begin //RES b3, r8
          if(opcode[5:3] == 6) begin //res b3, (HL) 일때. 이 명령어는 메모리접근 2번 때문에 16 T_cycle이 걸림.
            case(T_clk_counter)
              0: begin //T4 에지
                T_clk_counter_next = 1;
                next_main_state = EXECUTE_prefix;
              end
              1: begin //T1 에지 (M3 에지)
                T_clk_counter_next = 2;
                next_main_state = EXECUTE_prefix;
              end
              2: begin //T2 에지
                T_clk_counter_next = 3;
                next_main_state = EXECUTE_prefix;
                mem_control_r_ena = 1;
                mem_control_ad = {H, L};
              end
              3: begin //T3 에지
                T_clk_counter_next = 4;
                next_main_state = EXECUTE_prefix;
              end
              4: begin //T4 에지
                T_clk_counter_next = 5;
                next_main_state = EXECUTE_prefix;
              end
              5: begin //T1 에지 (M4 에지)
                T_clk_counter_next = 6;
                next_main_state = EXECUTE_prefix;
              end
              6: begin //T2 에지
                T_clk_counter_next = 7;
                next_main_state = EXECUTE_prefix;
                mem_control_w_ena = 1;
                mem_control_ad = {H, L};
                mem_control_w_data = mem_control_r_data[7:0] & ~(8'b00000001 << opcode[5:3]);
              end
              7: begin //T3 에지
                T_clk_counter_next = 8;
                next_main_state = EXECUTE_prefix;
              end
              8: begin //T4 에지
                PC_plus_ena = 1;
                if(((IE[4:0] & IF[4:0]) != 5'b0) && IME) begin
                  next_main_state = INTERRUPT;
                  T_clk_counter_next = 1;
                end
                else begin
                  next_main_state = fetch_T1;
                end
              end
            endcase
          end
          else begin
            reg_w_ena = 1;
            reg_ad = Operand_r8_ad; //flag는 바꾸지 않는 명령어임.
            reg_w_data[7:0] = Operand_r8[7:0] & ~(8'b00000001 << opcode[5:3]); //opcode[5:3]이 0이면 0번비트가 0으로 설정 되고, 3이면 3번비트가 0으로 설정됨.
            PC_plus_ena = 1;
            if(((IE[4:0] & IF[4:0]) != 5'b0) && IME) begin
              next_main_state = INTERRUPT;
              T_clk_counter_next = 1;
            end
            else begin
              next_main_state = fetch_T1;
            end
          end
        end
        2'b11: begin //SET b3, r8
          if(opcode[5:3] == 6) begin
            case(T_clk_counter)
              0: begin //T4 에지
                T_clk_counter_next = 1;
                next_main_state = EXECUTE_prefix;
              end
              1: begin //T1 에지 (M3 에지)
                T_clk_counter_next = 2;
                next_main_state = EXECUTE_prefix;
              end
              2: begin //T2 에지
                T_clk_counter_next = 3;
                next_main_state = EXECUTE_prefix;
                mem_control_r_ena = 1;
                mem_control_ad = {H, L};
              end
              3: begin //T3 에지
                T_clk_counter_next = 4;
                next_main_state = EXECUTE_prefix;
              end
              4: begin //T4 에지
                T_clk_counter_next = 5;
                next_main_state = EXECUTE_prefix;
              end
              5: begin //T1 에지 (M4 에지)
                T_clk_counter_next = 6;
                next_main_state = EXECUTE_prefix;
              end
              6: begin //T2 에지
                T_clk_counter_next = 7;
                next_main_state = EXECUTE_prefix;
                mem_control_w_ena = 1;
                mem_control_ad = {H, L};
                mem_control_w_data = mem_control_r_data[7:0] | (8'b00000001 << opcode[5:3]); //
              end
              7: begin //T3 에지
                T_clk_counter_next = 8;
                next_main_state = EXECUTE_prefix;
              end
              8: begin //T4 에지
                PC_plus_ena = 1;
                if(((IE[4:0] & IF[4:0]) != 5'b0) && IME) begin
                  next_main_state = INTERRUPT;
                  T_clk_counter_next = 1;
                end
                else begin
                  next_main_state = fetch_T1;
                end
              end
            endcase
          end
          else begin
            reg_w_ena = 1;
            reg_ad = Operand_r8_ad; //flag는 바꾸지 않는 명령어임.
            reg_w_data[7:0] = Operand_r8 | (8'b00000001 << opcode[5:3]); //opcode[5:3]이 0이면 0번비트가 1로 설정 되고, 3이면 3번비트가 1로 설정됨.
            PC_plus_ena = 1;
            if(((IE[4:0] & IF[4:0]) != 5'b0) && IME) begin
              next_main_state = INTERRUPT;
              T_clk_counter_next = 1;
            end
            else begin
              next_main_state = fetch_T1;
            end
          end
        end
      endcase //case(opcode[7:6]) 문의 endcase
    end //if(prefix_valid) 문의 end

