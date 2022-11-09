#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

int main(){
  system("clear");
  bool vartf = false;
  std::string version = "2.77.6";
  std::string input, print, op, comment, var, varIn, intIn, waitEnd;
  std::string fix = "nil";
  int loop = 1;
  int line = 0;
  int printCheck = 0;
  int op1, op2, commentCheck, varloop, intloop, intV, intVin, waitCheck, wait;
  while(loop == 1){
    loop = 1;
    line = line+1;
    std::cin >> input;
    if(input == "print("){
      printCheck = 1;
      while(printCheck == 1){
        std::cin >> print;
        if(print == "newl()"){
          std::cout << std::endl;
        }
          else if(print == ")"){
            printCheck = 0;
          }
            else if(print == "spc!"){
              std::cout << " ";
            }
        else if(print != ")"){
          std::cout << print << " ";
        }
      }
  }
       else if(input == "var("){
         varloop = 1;
         while(varloop == 1){
         std::cin >> varIn;
         if(varIn == ")"){
           varloop = 0;
         }
           else{
             var = varIn;
           }
       }
         }
    else if(input == "op1:"){
      std::cin >> op1;
      }
      else if(input == "op2:"){
      std::cin >> op2;
        }
    else if(input == "op:"){
      std::cin >> op;
      if(op == "+"){
        std::cout << op1 + op2;
      }
      else if(op == "-"){
        std::cout << op1 - op2;
      }
      else if(op == "*"){
        std::cout << op1 * op2;
      }
      else if(op == "/"){
        std::cout << op1 / op2;
      }
    }
    else if(input == "newl()"){
      std::cout << std::endl;
    }
      else if(input == "c("){
        commentCheck = 1;
        while(commentCheck == 1){
          std::cin >> comment;
          if(comment == ")"){
            commentCheck = 0;
            }
          else{}
        }
      }
        else if(input == "var()"){
          std::cout << var;
        }
          else if(input == "int()"){
            std::cout << intV;
          }
          else if(input == "int("){
            intloop = 1;
            while(intloop == 1){
              std::cin >> intVin;
              intV = intVin;
              std::cin >> intIn;
              if(intIn == ")"){
                intloop = 0;
              }
            }
          }
            else if(input == "wait("){
              waitCheck = 1;
              while(waitCheck == 1){
                std::cin >> wait;
                std::cin >> waitEnd;
                if(waitEnd == ")"){
                  waitCheck = 2;
                  sleep(wait);
                }
                else{
                  std::cout << "  err: expected ')'" << std::endl;
                }
              }
            }
              else if(input  == "clear()"){
                    system("clear");
                  }
    else{
      std::cout << "  err_unk:input, line [" << line << "]" << std::endl;
    }
  }
  }
