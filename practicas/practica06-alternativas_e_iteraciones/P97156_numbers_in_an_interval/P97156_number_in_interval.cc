#include <iostream>

int main() {
  int numero1,numero2{0};
  std::cin >> numero1 >> numero2;
  if (numero1 > numero2){
    std::cout << "El primer número tiene que ser más pequeño que el segundo" << std::endl;
    return 1;
  }
  for (int i = numero1; i <= numero2; ++i){
   std::cout << i <<std::endl;
  }

  return 0;
}
