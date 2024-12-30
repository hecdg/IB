
#include <iostream>

int main() {
  int numero1,numero2,numero3{0};
  std::cin >> numero1 >> numero2 >> numero3;
  if (numero1 > numero2 && numero1 > numero3) {
    std::cout << "El mayor es: " << numero1 << std::endl;
  }
  if (numero2 > numero1 && numero2 > numero3) {
    std::cout << "El mayor es: " << numero2 << std::endl;
  }
  if (numero3 > numero2 && numero3 > numero1) {
    std::cout << "El mayor es: " << numero3 << std::endl;
  }
  return 0;
}
