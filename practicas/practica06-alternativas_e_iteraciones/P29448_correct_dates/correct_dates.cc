#include <iostream>

int main() {
  int dia,mes,anyo{0};
  std::cin >> dia >> mes >> anyo;
  if (dia > 31 || mes > 12 || anyo <1800){
    std::cout << "Incorrect date" << std::endl;
    return 1;
  }
  /*if
  for (int i = numero1; i <= numero2; ++i){
   std::cout << i <<std::endl;
  }*/

  return 0;
}
                
