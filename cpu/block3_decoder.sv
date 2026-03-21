        if(opcode == 8'b11001011) begin //즉 opcode가 $CB이면, 이때는 다음 opcode를 읽어온 다음 그 명령어를 prefix명령어로 해석해줘야 함.
          next_main_state = prefix_T1;
          PC_plus_ena = 1; //다음 바이트를 메모리에서 읽어와야 함으로 PC값을 미리 증가시킴.
        end
        else if((opcode[5] == 0) && (opcode[2:0] == 3'b000)) begin //ret cond
          case(T_clk_counter)
            0: begin //T4에지
              next_main_state = EXECUTE;
              T_clk_counter_next = 1;
            end
            1: begin //T1에지(M2에지)
              next_main_state = EXECUTE;
              T_clk_counter_next = 2;
            end
            2: begin //T2에지
              next_main_state = EXECUTE;
              T_clk_counter_next = 3;
            end
            3: begin //T3에지
              next_main_state = EXECUTE;
              T_clk_counter_next = 4;
            end 
            4: begin //T4에지
              if(Condition == 1) begin //분기 일어남. with branch (20t)
                next_main_state = EXECUTE;
                T_clk_counter_next = 5;
              end
              else if(Condition == 0) begin //without branch (8t)
                PC_plus_ena = 1; //PC 1 증가.
                if((IE & IF) && IME) begin
                  next_main_state = INTERRUPT;
                  T_clk_counter_next = 1;
                end
                else begin
                  next_main_state = fetch_T1;
                  T_clk_counter_next = 0;
                end
              end
            end 
            5: begin //T1에지(M3에지)
              next_main_state = EXECUTE;
              T_clk_counter_next = 6;
            end
            6: begin
              next_main_state = EXECUTE;
              T_clk_counter_next = 7;
              mem_control_r_ena = 1;
              mem_control_ad = SP;
            end
            7: begin
              next_main_state = EXECUTE;
              T_clk_counter_next = 8;
            end
            8: begin
              next_main_state = EXECUTE;
              T_clk_counter_next = 9;
              reg_w_ena = 1;
              reg_ad = 10; //PC에 쓸거임.
              reg_w_data[15:0] = {PC[15:8], mem_control_r_data[7:0]};
              reg_ad_2 = 9; //SP에 1 더할거임.
              reg_w_data_2[15:0] = SP[15:0] + 1; 
            end
            9: begin //T1에지(M4에지)
              next_main_state = EXECUTE;
              T_clk_counter_next = 10;
            end
            10: begin
              next_main_state = EXECUTE;
              T_clk_counter_next = 11;
              mem_control_r_ena = 1;
              mem_control_ad = SP;
            end
            11: begin
              next_main_state = EXECUTE;
              T_clk_counter_next = 12;
            end
            12: begin
              next_main_state = EXECUTE;
              T_clk_counter_next = 13;
              reg_ad = 10; //PC에 쓸거임.
              reg_w_data[15:0] = {mem_control_r_data[7:0], PC[7:0]};
              reg_ad_2 = 9; //SP에 1 더할거임.
              reg_w_data_2[15:0] = SP[15:0] + 1; 
            end
            13: begin //T1에지(M5에지)
              next_main_state = EXECUTE;
              T_clk_counter_next = 14;
            end
            14: begin
              next_main_state = EXECUTE;
              T_clk_counter_next = 15;
            end
            15: begin
              next_main_state = EXECUTE;
              T_clk_counter_next = 16;
            end
            16: begin
              if((IE & IF) && IME) begin
                next_main_state = INTERRUPT;
                T_clk_counter_next = 1;
              end
              else begin
                next_main_state = fetch_T1;
                T_clk_counter_next = 0;
              end
            end
          endcase
        end
        else if((opcode[5] == 0) && (opcode[2:0] == 3'b010)) begin //jp cond, imm16
          case(T_clk_counter)
            0: begin //T4에지(M1)
              next_main_state = imm16_T1;
              T_clk_counter_next = 1;
            end
            8: begin //T4에지(M3)
              if(Condition == 1) begin //with branch (16t)
                next_main_state = EXECUTE;
                T_clk_counter_next = 9;
              end
              else if(Condition == 0) begin //without branch (12t)
                PC_plus_ena = 1; //PC 1 증가.
                imm16_reg_clear = 1;
                if((IE & IF) && IME) begin
                  next_main_state = INTERRUPT;
                  T_clk_counter_next = 1;
                end
                else begin
                  next_main_state = fetch_T1;
                  T_clk_counter_next = 0;
                end
              end
            end
            9: begin //T1에지(M4에지)
              next_main_state = EXECUTE;
              T_clk_counter_next = 10;
            end
            10: begin
              next_main_state = EXECUTE;
              T_clk_counter_next = 11;
            end
            11: begin
              next_main_state = EXECUTE;
              T_clk_counter_next = 12;
            end
            12: begin
              reg_w_ena = 1;
              reg_ad = 10; //PC에 쓸거임
              reg_w_data[15:0] = imm16_reg[15:0];
              imm16_reg_clear = 1;
              if((IE & IF) && IME) begin
                next_main_state = INTERRUPT;
                T_clk_counter_next = 1;
              end
              else begin
                next_main_state = fetch_T1;
                T_clk_counter_next = 0;
              end
            end
          endcase
        end
        else if((opcode[5] == 0) && (opcode[2:0] == 3'b100)) begin //call cond, imm16
          case(T_clk_counter)
            0: begin //T4에지(M1)
              next_main_state = imm16_T1;
              T_clk_counter_next = 1;
            end
            8: begin //T4에지(M3)
              if(Condition == 1) begin //with branch (24t)
                next_main_state = EXECUTE;
                T_clk_counter_next = 9;
              end
              else if(Condition == 0) begin //without branch (12t)
                PC_plus_ena = 1; //PC 1 증가.
                imm16_reg_clear = 1;
                if((IE & IF) && IME) begin
                  next_main_state = INTERRUPT;
                  T_clk_counter_next = 1;
                end
                else begin
                  next_main_state = fetch_T1;
                  T_clk_counter_next = 0;
                end
              end
            end
            9: begin //T1에지(M4에지)
              next_main_state = EXECUTE;
              T_clk_counter_next = 10;
            end
            10: begin
              next_main_state = EXECUTE;
              T_clk_counter_next = 11;
            end
            11: begin
              next_main_state = EXECUTE;
              T_clk_counter_next = 12;
            end
            12: begin
              next_main_state = EXECUTE;
              T_clk_counter_next = 13;
            end
            13: begin //T1에지(M5에지)
              next_main_state = EXECUTE;
              T_clk_counter_next = 14;
            end
            14: begin
              next_main_state = EXECUTE;
              T_clk_counter_next = 15;
              mem_control_w_ena = 1;
              mem_control_ad = SP - 1; //stack에 먼저 PC의 상위바이트를 넣음.
              mem_control_w_data = PC[15:8];
              reg_w_ena = 1;
              reg_ad = 9; //SP에 쓸거임.
              reg_w_data[15:0] = SP - 1; //SP를 1 감소시킴.
            end
            15: begin
              next_main_state = EXECUTE;
              T_clk_counter_next = 16;
            end
            16: begin
              next_main_state = EXECUTE;
              T_clk_counter_next = 17;
            end
            17: begin //T1에지(M6에지)
              next_main_state = EXECUTE;
              T_clk_counter_next = 18;
            end
            18: begin
              next_main_state = EXECUTE;
              T_clk_counter_next = 19;
              mem_control_ad = SP - 1; //stack에 이후 PC의 하위바이트를 넣음.
              mem_control_w_data = PC[7:0];
              reg_w_ena = 1;
              reg_ad = 9; //SP에 쓸거임.
              reg_w_data[15:0] = SP - 1; //SP를 1 감소시킴.
            end
            19: begin
              next_main_state = EXECUTE;
              T_clk_counter_next = 20;
            end
            20: begin
              reg_w_ena = 1;
              reg_ad = 10; //PC에 쓸거임
              reg_w_data[15:0] = imm16_reg[15:0];
              imm16_reg_clear = 1;
              if((IE & IF) && IME) begin
                next_main_state = INTERRUPT;
                T_clk_counter_next = 1;
              end
              else begin
                next_main_state = fetch_T1;
                T_clk_counter_next = 0;
              end
            end
          endcase
        end
        else if(opcode[2:0] == 3'b111) begin //rst tgt3
          case(T_clk_counter)
            0: begin //T4에지(M1)
              next_main_state = EXECUTE;
              T_clk_counter_next = 1;
              PC_plus_ena = 1; //바로 PC + 1로 PC를 만들어줌. 이 값을 스택에 저장해야 함.
            end
            1: begin //T1에지(M2에지)
              next_main_state = EXECUTE;
              T_clk_counter_next = 2;
            end
            2: begin //T2에지
              next_main_state = EXECUTE;
              T_clk_counter_next = 3;
            end
            3: begin //T3에지
              next_main_state = EXECUTE;
              T_clk_counter_next = 4;
            end 
            4: begin //T4에지
              next_main_state = EXECUTE;
              T_clk_counter_next = 5;
            end 
            5: begin //T1에지(M3에지)
              next_main_state = EXECUTE;
              T_clk_counter_next = 6;
            end 
            6: begin //T2에지
              next_main_state = EXECUTE;
              T_clk_counter_next = 7;
              mem_control_w_ena = 1;
              mem_control_ad = SP[15:0] - 1;
              mem_control_w_data = PC[15:8];
              reg_w_ena = 1;
              reg_ad = 9; //SP에 쓸거임.
              reg_w_data[15:0] = SP[15:0] - 1;
            end
            7: begin //T3에지
              next_main_state = EXECUTE;
              T_clk_counter_next = 8;
            end
            8: begin //T4에지
              next_main_state = EXECUTE;
              T_clk_counter_next = 9;
            end
            9: begin //T1에지(M4에지)
              next_main_state = EXECUTE;
              T_clk_counter_next = 10;
            end
            10: begin //T2에지
              next_main_state = EXECUTE;
              T_clk_counter_next = 11;
              mem_control_w_ena = 1;
              mem_control_ad = SP[15:0] - 1;
              mem_control_w_data = PC[7:0];
              reg_w_ena = 1;
              reg_ad = 9; //SP에 쓸거임.
              reg_w_data[15:0] = SP[15:0] - 1;
            end
            11: begin //T3에지
              next_main_state = EXECUTE;
              T_clk_counter_next = 12;
            end
            12: begin //T4에지
              reg_w_ena = 1;
              reg_ad = 10; //PC에 쓸거임.
              reg_w_data[15:0] = {10'b0, opcode[5:3], 3'b000}; //opcode[5:3]에 8을 곱한(왼쪽으로 3번 쉬프트) 값으로 PC를 바꿔줌.
              if((IE & IF) && IME) begin
                next_main_state = INTERRUPT;
                T_clk_counter_next = 1;
              end
              else begin
                next_main_state = fetch_T1;
                T_clk_counter_next = 0;
              end
            end
          endcase
        end
        else if(opcode[3:0] == 4'b0001) begin //pop r16stk
          case(T_clk_counter)
            0: begin //T4에지(M1)
              next_main_state = EXECUTE;
              T_clk_counter_next = 1;
            end
            1: begin //T1에지(M2에지)
              next_main_state = EXECUTE;
              T_clk_counter_next = 2;
            end
            2: begin //T2에지
              next_main_state = EXECUTE;
              T_clk_counter_next = 3;
              mem_control_r_ena = 1;
              mem_control_ad = SP;
              reg_w_ena = 1;
              reg_ad = 9; //SP에 쓸거임.
              reg_w_data[15:0] = SP + 1;
            end
            3: begin //T3에지
              next_main_state = EXECUTE;
              T_clk_counter_next = 4;
            end 
            4: begin //T4에지
              next_main_state = EXECUTE;
              T_clk_counter_next = 5;
              tem_reg_w_ena = 1;
              tem_reg_w_data[7:0] = mem_control_r_data[7:0];
            end 
            5: begin //T1에지(M3에지)
              next_main_state = EXECUTE;
              T_clk_counter_next = 6;
            end 
            6: begin //T2에지
              next_main_state = EXECUTE;
              T_clk_counter_next = 7;
              mem_control_r_ena = 1;
              mem_control_ad = SP;
              reg_w_ena = 1;
              reg_ad = 9; //SP에 쓸거임.
              reg_w_data[15:0] = SP + 1;
            end
            7: begin //T3에지
              next_main_state = EXECUTE;
              T_clk_counter_next = 8;
            end
            8: begin //T4에지
              next_main_state = EXECUTE;
              T_clk_counter_next = 9;
            end
            9: begin //T1에지(M4에지)
              next_main_state = EXECUTE;
              T_clk_counter_next = 10;
            end
            10: begin //T2에지
              next_main_state = EXECUTE;
              T_clk_counter_next = 11;
            end
            11: begin //T3에지
              next_main_state = EXECUTE;
              T_clk_counter_next = 12;
            end
            12: begin //T4에지
              reg_w_ena = 1;
              reg_ad = register_r16stk_ad;
              reg_w_data[15:0] = {mem_control_r_data[7:0], tem_reg[7:0]}; //만약 AF에 쓰는거여도 F[3:0]은 어차피 F <= reg_w_data_2[7:0] & 8'b11110000; 이렇게 되어있어서 문제없음.
              tem_reg_w_ena = 1; //tem_reg 초기화.
              tem_reg_w_data = 0;
              PC_plus_ena = 1; //PC 1 증가.
              if((IE & IF) && IME) begin
                next_main_state = INTERRUPT;
                T_clk_counter_next = 1;
              end
              else begin
                next_main_state = fetch_T1;
                T_clk_counter_next = 0;
              end
            end
          endcase
        end
        else if(opcode[3:0] == 4'b0101) begin //push r16stk
          case(T_clk_counter)
            0: begin //T4에지(M1)
              next_main_state = EXECUTE;
              T_clk_counter_next = 1;
            end
            1: begin //T1에지(M2에지)
              next_main_state = EXECUTE;
              T_clk_counter_next = 2;
            end
            2: begin //T2에지
              next_main_state = EXECUTE;
              T_clk_counter_next = 3;
              mem_control_w_ena = 1;
              mem_control_ad = SP - 1;
              mem_control_w_data[7:0] = register_r16stk[15:8];
              reg_w_ena = 1;
              reg_ad = 9; //SP에 쓸거임.
              reg_w_data[15:0] = SP - 1;
            end
            3: begin //T3에지
              next_main_state = EXECUTE;
              T_clk_counter_next = 4;
            end 
            4: begin //T4에지
              next_main_state = EXECUTE;
              T_clk_counter_next = 5;
            end 
            5: begin //T1에지(M3에지)
              next_main_state = EXECUTE;
              T_clk_counter_next = 6;
            end 
            6: begin //T2에지
              next_main_state = EXECUTE;
              T_clk_counter_next = 7;
              mem_control_w_ena = 1;
              mem_control_ad = SP - 1;
              mem_control_w_data[7:0] = register_r16stk[7:0];
              reg_w_ena = 1;
              reg_ad = 9; //SP에 쓸거임.
              reg_w_data[15:0] = SP - 1;
            end
            7: begin //T3에지
              next_main_state = EXECUTE;
              T_clk_counter_next = 8;
            end
            8: begin //T4에지
              next_main_state = EXECUTE;
              T_clk_counter_next = 9;
            end
            9: begin //T1에지(M4에지)
              next_main_state = EXECUTE;
              T_clk_counter_next = 10;
            end
            10: begin //T2에지
              next_main_state = EXECUTE;
              T_clk_counter_next = 11;
            end
            11: begin //T3에지
              next_main_state = EXECUTE;
              T_clk_counter_next = 12;
            end
            12: begin //T4에지
              PC_plus_ena = 1;
              if((IE & IF) && IME) begin
                next_main_state = INTERRUPT;
                T_clk_counter_next = 1;
              end
              else begin
                next_main_state = fetch_T1;
                T_clk_counter_next = 0;
              end
            end
          endcase
        end
        else begin
          case(opcode[5:0])
            6'b000110: begin //add a, imm8
              case(T_clk_counter)
                0: begin //M1의 T4에지
                  next_main_state = imm8_T1;
                  T_clk_counter_next = 1;
                end
                4: begin //M2의 T4에지
                  a_8 = A;
                  b_8 = imm8_reg;
                  cin_8 = 0;
                  alu_op_8 = 0; //더하기 연산.
                  reg_w_ena = 1;
                  reg_ad = 11; //AF에 쓸거임
                  reg_w_data[15:0] = {alu_result_8[7:0], flag_8[3:0], 4'b0000};
                  imm8_reg_clear = 1;
                  PC_plus_ena = 1; //PC 1 증가
                  if ((IF & IE) && IME) begin
                    next_main_state = INTERRUPT;
                    T_clk_counter_next = 1;
                  end
                  else begin
                    next_main_state = fetch_T1;
                    T_clk_counter_next = 0;
                  end
                end
              endcase
            end
            6'b001110: begin //adc a, imm8
              case(T_clk_counter)
                0: begin //M1의 T4에지
                  next_main_state = imm8_T1;
                  T_clk_counter_next = 1;
                end
                4: begin //M2의 T4에지
                  a_8 = A;
                  b_8 = imm8_reg;
                  cin_8 = F[4];
                  alu_op_8 = 0; //더하기 연산.
                  reg_w_ena = 1;
                  reg_ad = 11; //AF에 쓸거임
                  reg_w_data[15:0] = {alu_result_8[7:0], flag_8[3:0], 4'b0000};
                  imm8_reg_clear = 1;
                  PC_plus_ena = 1; //PC 1 증가
                  if ((IF & IE) && IME) begin
                    next_main_state = INTERRUPT;
                    T_clk_counter_next = 1;
                  end
                  else begin
                    next_main_state = fetch_T1;
                    T_clk_counter_next = 0;
                  end
                end
              endcase
            end
            6'b010110: begin //sub a, imm8
              case(T_clk_counter)
                0: begin //M1의 T4에지
                  next_main_state = imm8_T1;
                  T_clk_counter_next = 1;
                end
                4: begin //M2의 T4에지
                  a_8 = A;
                  b_8 = imm8_reg;
                  cin_8 = 0;
                  alu_op_8 = 1; //빼기 연산.
                  reg_w_ena = 1;
                  reg_ad = 11; //AF에 쓸거임
                  reg_w_data[15:0] = {alu_result_8[7:0], flag_8[3:0], 4'b0000};
                  imm8_reg_clear = 1;
                  PC_plus_ena = 1; //PC 1 증가
                  if ((IF & IE) && IME) begin
                    next_main_state = INTERRUPT;
                    T_clk_counter_next = 1;
                  end
                  else begin
                    next_main_state = fetch_T1;
                    T_clk_counter_next = 0;
                  end
                end
              endcase
            end
            6'b011110: begin //sbc a, imm8
              case(T_clk_counter)
                0: begin //M1의 T4에지
                  next_main_state = imm8_T1;
                  T_clk_counter_next = 1;
                end
                4: begin //M2의 T4에지
                  a_8 = A;
                  b_8 = imm8_reg;
                  cin_8 = F[4];
                  alu_op_8 = 1; //빼기 연산.
                  reg_w_ena = 1;
                  reg_ad = 11; //AF에 쓸거임
                  reg_w_data[15:0] = {alu_result_8[7:0], flag_8[3:0], 4'b0000};
                  imm8_reg_clear = 1;
                  PC_plus_ena = 1; //PC 1 증가
                  if ((IF & IE) && IME) begin
                    next_main_state = INTERRUPT;
                    T_clk_counter_next = 1;
                  end
                  else begin
                    next_main_state = fetch_T1;
                    T_clk_counter_next = 0;
                  end
                end
              endcase
            end
            6'b100110: begin //and a, imm8
              case(T_clk_counter)
                0: begin //M1의 T4에지
                  next_main_state = imm8_T1;
                  T_clk_counter_next = 1;
                end
                4: begin //M2의 T4에지
                  a_8 = A;
                  b_8 = imm8_reg;
                  cin_8 = 0; //사용안되지만 0으로 설정.
                  alu_op_8 = 2; //AND 연산.
                  reg_w_ena = 1;
                  reg_ad = 11; //AF에 쓸거임
                  reg_w_data[15:0] = {alu_result_8[7:0], flag_8[3:0], 4'b0000};
                  imm8_reg_clear = 1;
                  PC_plus_ena = 1; //PC 1 증가
                  if ((IF & IE) && IME) begin
                    next_main_state = INTERRUPT;
                    T_clk_counter_next = 1;
                  end
                  else begin
                    next_main_state = fetch_T1;
                    T_clk_counter_next = 0;
                  end
                end
              endcase
            end
            6'b101110: begin //xor a, imm8	
              case(T_clk_counter)
                0: begin //M1의 T4에지
                  next_main_state = imm8_T1;
                  T_clk_counter_next = 1;
                end
                4: begin //M2의 T4에지
                  a_8 = A;
                  b_8 = imm8_reg;
                  cin_8 = 0; //사용안되지만 0으로 설정.
                  alu_op_8 = 3; //XOR 연산.
                  reg_w_ena = 1;
                  reg_ad = 11; //AF에 쓸거임
                  reg_w_data[15:0] = {alu_result_8[7:0], flag_8[3:0], 4'b0000};
                  imm8_reg_clear = 1;
                  PC_plus_ena = 1; //PC 1 증가
                  if ((IF & IE) && IME) begin
                    next_main_state = INTERRUPT;
                    T_clk_counter_next = 1;
                  end
                  else begin
                    next_main_state = fetch_T1;
                    T_clk_counter_next = 0;
                  end
                end
              endcase
            end
            6'b110110: begin //or a, imm8
              case(T_clk_counter)
                0: begin //M1의 T4에지
                  next_main_state = imm8_T1;
                  T_clk_counter_next = 1;
                end
                4: begin //M2의 T4에지
                  a_8 = A;
                  b_8 = imm8_reg;
                  cin_8 = 0; //사용안되지만 0으로 설정.
                  alu_op_8 = 4; //OR 연산.
                  reg_w_ena = 1;
                  reg_ad = 11; //AF에 쓸거임
                  reg_w_data[15:0] = {alu_result_8[7:0], flag_8[3:0], 4'b0000};
                  imm8_reg_clear = 1;
                  PC_plus_ena = 1; //PC 1 증가
                  if ((IF & IE) && IME) begin
                    next_main_state = INTERRUPT;
                    T_clk_counter_next = 1;
                  end
                  else begin
                    next_main_state = fetch_T1;
                    T_clk_counter_next = 0;
                  end
                end
              endcase
            end
            6'b111110: begin //cp a, imm8
              case(T_clk_counter)
                0: begin //M1의 T4에지
                  next_main_state = imm8_T1;
                  T_clk_counter_next = 1;
                end
                4: begin //M2의 T4에지
                  a_8 = A;
                  b_8 = imm8_reg;
                  cin_8 = 0; //사용안되지만 0으로 설정.
                  alu_op_8 = 1; //빼기 연산.
                  reg_w_ena = 1;
                  reg_ad = 11; //AF에 쓸거임. A는 변하지 않음.
                  reg_w_data[15:0] = {A[7:0], flag_8[3:0], 4'b0000}; //A는 기존값 유지. F만 바뀜.
                  imm8_reg_clear = 1;
                  PC_plus_ena = 1; //PC 1 증가
                  if ((IF & IE) && IME) begin
                    next_main_state = INTERRUPT;
                    T_clk_counter_next = 1;
                  end
                  else begin
                    next_main_state = fetch_T1;
                    T_clk_counter_next = 0;
                  end
                end
              endcase
            end
            6'b001001: begin //ret (Return from Subroutine)
              case(T_clk_counter)
                0: begin //M1의 T4에지
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 1;
                end
                1: begin //T1에지(M2에지)
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 2;
                end
                2: begin //T2에지
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 3;
                  mem_control_r_ena = 1;
                  mem_control_ad = SP[15:0];
                end
                3: begin //T3에지
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 4;
                end
                4: begin //T4에지
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 5;
                  reg_w_ena = 1;
                  reg_ad = 10; //PC에 쓸거임.
                  reg_w_data[15:0] = {PC[15:8], mem_control_r_data[7:0]}; //상위 바이트는 유지. 하위 바이트는 mem_r_data 저장.
                  reg_ad_2 = 9; //SP에 쓸거임.
                  reg_w_data[15:0] = SP[15:0] + 1; //SP 1 증가.
                end
                5: begin //T1에지(M3에지)
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 6;
                end
                6: begin //T2에지
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 7;
                  mem_control_r_ena = 1;
                  mem_control_ad = SP[15:0];
                end
                7: begin //T3에지
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 8;
                end
                8: begin //T4에지
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 9;
                  reg_w_ena = 1;
                  reg_ad = 10; //PC에 쓸거임.
                  reg_w_data[15:0] = {mem_control_r_data[7:0], PC[7:0]}; //이렇게 되면 SP를 주소로 해서 읽어서 PC[7:0]에 쓰고 SP + 1을 주소로 해서 PC[15:8]에 쓰게됨.
                  reg_ad_2 = 9; //SP에 쓸거임.
                  reg_w_data[15:0] = SP[15:0] + 1;
                end
                9: begin //T1에지(M4에지)
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 10;
                end
                10: begin //T2에지
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 11;
                end
                11: begin //T3에지
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 12;
                end
                12: begin //T4에지
                  if ((IF & IE) && IME) begin
                    next_main_state = INTERRUPT;
                    T_clk_counter_next = 1;
                  end
                  else begin
                    next_main_state = fetch_T1;
                    T_clk_counter_next = 0;
                  end
                end
              endcase
            end
            6'b011001: begin //reti (Return from Interrupt)
              case(T_clk_counter)
                0: begin //M1의 T4에지
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 1;
                end
                1: begin //T1에지(M2에지)
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 2;
                end
                2: begin //T2에지
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 3;
                  mem_control_r_ena = 1;
                  mem_control_ad = SP[15:0];
                end
                3: begin //T3에지
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 4;
                end
                4: begin //T4에지
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 5;
                  reg_w_ena = 1;
                  reg_ad = 10; //PC에 쓸거임.
                  reg_w_data[15:0] = {PC[15:8], mem_control_r_data[7:0]}; //상위 바이트는 유지. 하위 바이트는 mem_r_data 저장.
                  reg_ad_2 = 9; //SP에 쓸거임.
                  reg_w_data[15:0] = SP[15:0] + 1; //SP 1 증가.
                end
                5: begin //T1에지(M3에지)
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 6;
                end
                6: begin //T2에지
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 7;
                  mem_control_r_ena = 1;
                  mem_control_ad = SP[15:0];
                end
                7: begin //T3에지
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 8;
                end
                8: begin //T4에지
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 9;
                  reg_w_ena = 1;
                  reg_ad = 10; //PC에 쓸거임.
                  reg_w_data[15:0] = {mem_control_r_data[7:0], PC[7:0]}; 
                  reg_ad_2 = 9; //SP에 쓸거임.
                  reg_w_data[15:0] = SP[15:0] + 1;
                end
                9: begin //T1에지(M4에지)
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 10;
                end
                10: begin //T2에지
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 11;
                end
                11: begin //T3에지
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 12;
                end
                12: begin //T4에지
                  IME_on = 1; //T4에지에서 IME가 1로 바뀜.
                  if ((IF & IE) && (IME | IME_on)) begin //이미 IME가 켜져있거나 IME_on신호가 활성화되어 있으면 INTERRUPT핸들러를 실행하게 됨.
                    next_main_state = INTERRUPT;
                    T_clk_counter_next = 1;
                  end
                  else begin
                    next_main_state = fetch_T1;
                    T_clk_counter_next = 0;
                  end
                end
              endcase
            end
            6'b000011: begin //jp imm16. //현재의 PC 값을 무시하고 즉치값으로 주어진 16비트 주소로 강제 점프하는 명령어
              case(T_clk_counter)
                0: begin //M1의 T4에지
                  next_main_state = imm16_T1;
                  T_clk_counter_next = 1;
                end
                8: begin //M3의 T4에지
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 9;
                end
                9: begin //M4의 T1에지
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 10;
                end
                10: begin //T2에지
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 11;
                end
                11: begin //T3에지
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 12;
                end
                12: begin //T4에지
                  reg_w_ena = 1;
                  reg_ad = 10; //PC에 쓸거임.
                  reg_w_data[15:0] = imm16_reg[15:0]; //PC에 바로 대입함. JR과는 다름.
                  imm16_reg_clear = 1; //imm16_reg 리셋.
                  if ((IF & IE) && IME) begin 
                    next_main_state = INTERRUPT;
                    T_clk_counter_next = 1;
                  end
                  else begin
                    next_main_state = fetch_T1;
                    T_clk_counter_next = 0;
                  end
                end
              endcase
            end
            6'b101001: begin //jp hl
              reg_w_ena = 1;
              reg_ad = 10; //PC에 쓸거임.
              reg_w_data[15:0] = {H, L}; //HL레지스터 값을 즉시 PC에 복사함.
              if((IF & IE) && IME) begin
                next_main_state = INTERRUPT;
                T_clk_counter_next = 1;
              end
              else begin
                next_main_state = fetch_T1;
                T_clk_counter_next = 0;
              end
            end
            6'b001101: begin //call imm16
              case(T_clk_counter)
                0: begin //T4에지(M1)
                  next_main_state = imm16_T1;
                  T_clk_counter_next = 1;
                end
                8: begin //T4에지(M3)
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 9;
                  PC_plus_ena = 1; //여기서는 마지막에 말고 그냥 바로 PC를 1 증가시켜줌.
                end
                9: begin //T1에지(M4에지)
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 10;
                end
                10: begin //T2에지
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 11;
                end
                11: begin //T3에지
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 12;
                end
                12: begin //T4에지
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 13;
                end
                13: begin //T1에지(M5에지)
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 14;
                end
                14: begin //T2에지
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 15;
                  mem_control_w_ena = 1;
                  mem_control_ad = SP - 1; //stack에 먼저 PC의 상위바이트를 넣음.
                  mem_control_w_data = PC[15:8];
                  reg_w_ena = 1;
                  reg_ad = 9; //SP에 쓸거임.
                  reg_w_data[15:0] = SP - 1; //SP를 1 감소시킴.
                end
                15: begin //T3에지
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 16;
                end
                16: begin //T4에지
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 17;
                end
                17: begin //T1에지(M6에지)
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 18;
                end
                18: begin //T2에지
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 19;
                  mem_control_w_ena = 1;
                  mem_control_ad = SP - 1; //stack에 이제 PC의 하위바이트를 넣음. 
                  mem_control_w_data = PC[7:0];
                  reg_w_ena = 1;
                  reg_ad = 9; //SP에 쓸거임.
                  reg_w_data[15:0] = SP - 1; //SP를 1 감소시킴.
                end
                19: begin //T3에지
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 20;
                end
                20: begin //T4에지
                  reg_w_ena = 1;
                  reg_ad = 10; //PC에 쓸거임.
                  reg_w_data[15:0] = imm16_reg[15:0];
                  imm16_reg_clear = 1;
                  if((IF & IE) && IME) begin
                    next_main_state = INTERRUPT;
                    T_clk_counter_next = 1;
                  end
                  else begin
                    next_main_state = fetch_T1;
                    T_clk_counter_next = 0;
                  end
                end
              endcase
            end
            6'b100010: begin //ldh [c], a
              case(T_clk_counter)
                0: begin //M1의 T4에지
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 1;
                end
                1: begin //T1에지
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 2;
                end
                2: begin //T2에지
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 3;
                  mem_control_w_ena = 1;
                  mem_control_ad[15:0] = {8'hFF, C};
                  mem_control_w_data[7:0] = A;
                end
                3: begin //T3에지
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 4;
                end
                4: begin //T4에지
                  PC_plus_ena = 1; //PC 1 증가
                  if((IF & IE) && IME) begin
                    next_main_state = INTERRUPT;
                    T_clk_counter_next = 1;
                  end
                  else begin
                    next_main_state = fetch_T1;
                    T_clk_counter_next = 0;
                  end
                end
              endcase
            end
            6'b100000: begin //ldh [imm8], a	
              case(T_clk_counter)
                0: begin //T4에지(M1)
                  next_main_state = imm8_T1;
                  T_clk_counter_next = 1;
                end
                4: begin //T4에지(M2)
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 5;
                end
                5: begin //T1에지(M3에지)
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 6;
                end
                6: begin //T2에지
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 7;
                  mem_control_w_ena = 1;
                  mem_control_ad = 16'hFF00 + {8'b00000000, imm8_reg[7:0]};
                  mem_control_w_data = A;
                end
                7: begin //T3에지
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 8;
                end
                8: begin //T4에지
                  imm8_reg_clear = 1;
                  PC_plus_ena = 1; //PC 1 증가
                  if((IF & IE) && IME) begin
                    next_main_state = INTERRUPT;
                    T_clk_counter_next = 1;
                  end
                  else begin
                    next_main_state = fetch_T1;
                    T_clk_counter_next = 0;
                  end
                end
              endcase
            end
            6'b101010: begin //ld [imm16], a
              case(T_clk_counter)
                0: begin //T4에지(M1)
                  next_main_state = imm16_T1;
                  T_clk_counter_next = 1;
                end
                8: begin //T4에지(M3)
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 9;
                end
                9: begin //T1에지(M4에지)
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 10;
                end
                10: begin //T2에지
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 11;
                  mem_control_w_ena = 1;
                  mem_control_ad = imm16_reg[15:0];
                  mem_control_w_data[7:0] = A;
                end
                11: begin //T3에지
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 12;
                end
                12: begin //T4에지
                  imm16_reg_clear = 1;
                  PC_plus_ena = 1; //PC 1 증가
                  if((IF & IE) && IME) begin
                    next_main_state = INTERRUPT;
                    T_clk_counter_next = 1;
                  end
                  else begin
                    next_main_state = fetch_T1;
                    T_clk_counter_next = 0;
                  end
                end
              endcase
            end
            6'b110010: begin //ldh a, [c]
              case(T_clk_counter)
                0: begin //M1의 T4에지
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 1;
                end
                1: begin //T1에지
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 2;
                end
                2: begin //T2에지
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 3;
                  mem_control_r_ena = 1;
                  mem_control_ad[15:0] = {8'hFF, C};
                end
                3: begin //T3에지
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 4;
                end
                4: begin //T4에지
                  reg_w_ena = 1;
                  reg_ad = 1; //A에 쓸거임.
                  reg_w_data[7:0] = mem_control_r_data;
                  PC_plus_ena = 1; //PC 1 증가
                  if((IF & IE) && IME) begin
                    next_main_state = INTERRUPT;
                    T_clk_counter_next = 1;
                  end
                  else begin
                    next_main_state = fetch_T1;
                    T_clk_counter_next = 0;
                  end
                end
              endcase
            end
            6'b110000: begin //ldh a, [imm8]
              case(T_clk_counter)
                0: begin //T4에지(M1)
                  next_main_state = imm8_T1;
                  T_clk_counter_next = 1;
                end
                4: begin //T4에지(M2)
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 5;
                end
                5: begin //T1에지(M3에지)
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 6;
                end
                6: begin //T2에지
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 7;
                  mem_control_r_ena = 1;
                  mem_control_ad = 16'hFF00 + {8'b00000000, imm8_reg[7:0]};
                end
                7: begin //T3에지
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 8;
                end
                8: begin //T4에지
                  reg_w_ena = 1;
                  reg_ad = 1; //A에 쓸거임.
                  reg_w_data[7:0] = mem_control_r_data;
                  imm8_reg_clear = 1;
                  PC_plus_ena = 1; //PC 1 증가
                  if((IF & IE) && IME) begin
                    next_main_state = INTERRUPT;
                    T_clk_counter_next = 1;
                  end
                  else begin
                    next_main_state = fetch_T1;
                    T_clk_counter_next = 0;
                  end
                end
              endcase
            end
            6'b111010: begin //ld a, [imm16]
              case(T_clk_counter)
                0: begin //T4에지(M1)
                  next_main_state = imm16_T1;
                  T_clk_counter_next = 1;
                end
                8: begin //T4에지(M3)
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 9;
                end
                9: begin //T1에지(M4에지)
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 10;
                end
                10: begin //T2에지
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 11;
                  mem_control_r_ena = 1;
                  mem_control_ad = imm16_reg[15:0];
                end
                11: begin //T3에지
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 12;
                end
                12: begin //T4에지
                  reg_w_ena = 1;
                  reg_ad = 1; //A에 쓸거임.
                  reg_w_data[7:0] = mem_control_r_data;
                  imm16_reg_clear = 1;
                  PC_plus_ena = 1; //PC 1 증가
                  if((IF & IE) && IME) begin
                    next_main_state = INTERRUPT;
                    T_clk_counter_next = 1;
                  end
                  else begin
                    next_main_state = fetch_T1;
                    T_clk_counter_next = 0;
                  end
                end
              endcase
            end
            6'b101000: begin //add sp, imm8
              case(T_clk_counter)
                0: begin //T4에지(M1)
                  next_main_state = imm8_T1;
                  T_clk_counter_next = 1;
                end
                4: begin //T4에지(M2)
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 5;
                end
                5: begin //T1에지(M3에지)
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 6;
                end
                6: begin //T2에지
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 7;
                end
                7: begin //T3에지
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 8;
                end
                8: begin //T4에지
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 9;
                end
                9: begin //T1에지(M4에지)
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 10;
                end
                10: begin //T2에지
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 11;
                end
                11: begin //T3에지
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 12;
                end
                12: begin //T4에지
                  reg_w_ena = 1;
                  reg_ad = 9; //SP에 쓸거임.
                  reg_w_data[15:0] = SP + {{8{imm8_reg[7]}}, imm8_reg[7:0]};
                  reg_ad_2 = 2; //F에 쓸거임.
                  reg_w_data_2[7:0] = {1'b0, 1'b0, (({1'b0, SP[3:0]} + {1'b0, imm8_reg[3:0]}) > 5'b01111), ({1'b0, SP[7:0]} + {1'b0, imm8_reg[7:0]} > 9'b011111111), 4'b0000};
                  imm8_reg_clear = 1;
                  PC_plus_ena = 1; //PC 1 증가
                  if((IF & IE) && IME) begin
                    next_main_state = INTERRUPT;
                    T_clk_counter_next = 1;
                  end
                  else begin
                    next_main_state = fetch_T1;
                    T_clk_counter_next = 0;
                  end
                end
              endcase
            end
            6'b111000: begin //ld hl, sp + imm8	
              case(T_clk_counter)
                0: begin //T4에지(M1)
                  next_main_state = imm8_T1;
                  T_clk_counter_next = 1;
                end
                4: begin //T4에지(M2)
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 5;
                end
                5: begin //T1에지(M3에지)
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 6;
                end
                6: begin //T2에지
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 7;
                end
                7: begin //T3에지
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 8;
                end
                8: begin //T4에지
                  reg_w_ena = 1;
                  reg_ad = 14; //HL에 쓸거임.
                  reg_w_data[15:0] = SP + {{8{imm8_reg[7]}}, imm8_reg[7:0]};
                  reg_ad_2 = 2; //F에 쓸거임.
                  reg_w_data_2[7:0] = {1'b0, 1'b0, (({1'b0, SP[3:0]} + {1'b0, imm8_reg[3:0]}) > 5'b01111), ({1'b0, SP[7:0]} + {1'b0, imm8_reg[7:0]} > 9'b011111111), 4'b0000};
                  imm8_reg_clear = 1;
                  PC_plus_ena = 1; //PC 1 증가
                  if((IF & IE) && IME) begin
                    next_main_state = INTERRUPT;
                    T_clk_counter_next = 1;
                  end
                  else begin
                    next_main_state = fetch_T1;
                    T_clk_counter_next = 0;
                  end
                end
              endcase
            end
            6'b111001: begin //ld sp, hl
              case(T_clk_counter)
                0: begin //T4에지
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 1;
                end
                1: begin //T1에지
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 2;
                end
                2: begin //T2에지
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 3;
                end
                3: begin //T3에지
                  next_main_state = EXECUTE;
                  T_clk_counter_next = 4;
                end
                4: begin //T4에지
                  reg_w_ena = 1;
                  reg_ad = 9; //SP에 쓸거임.
                  reg_w_data[15:0] = {H, L};
                  PC_plus_ena = 1; //PC 1 증가
                  if((IF & IE) && IME) begin
                    next_main_state = INTERRUPT;
                    T_clk_counter_next = 1;
                  end
                  else begin
                    next_main_state = fetch_T1;
                    T_clk_counter_next = 0;
                  end
                end
              endcase
            end
            6'b110011: begin //di (Disable Interrupts)
              IME_off = 1; //T4에지에서 IME를 끔.
              PC_plus_ena = 1;
              next_main_state = fetch_T1; //즉시 IME가 꺼지는것이기 때문에 무조건 fetch_T1으로 넘어감.
              T_clk_counter_next = 0;
            end
            6'b111011: begin //ei (Enable Interrupts). 주의할점은 다음 명령어가 실행된 후에 IME를 1로 설정한다는 점임. DI와 다르게 즉시 IME가 꺼지지 않음.
              PC_plus_ena = 1; //PC 1 증가.
              if(IME == 1) begin //이미 IME가 1일때는 그냥 nop과 똑같이 처리함.
                if((IF & IE) && IME) begin
                  next_main_state = INTERRUPT;
                  T_clk_counter_next = 1;
                end
                else begin
                  next_main_state = fetch_T1;
                  T_clk_counter_next = 1;
                end
              end
              else if(IME == 0) begin
                next_main_state = fetch_T1;
                T_clk_counter_next = 0;
                EI_pending_on = 1; //이 값을 1로 만들고 다음 명령어 끝날때 IME가 1로 설정됨.
              end
            end
          endcase
        end
