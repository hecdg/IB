#include <iostream>

double Calcular_harmonico(int numero) {
  double suma = 0.0;
  for (int i = 1; i <= numero; ++i){
    suma += (1.0 / i);
  }
  return suma;

}

int main() {
  int numero{0};
  std::cin >> numero;
  if (numero < 0){
    std::cout << "Introduzca un valor positivo" << std::endl;
    return 1;
  }
  double resultado = Calcular_harmonico(numero);
  std::cout << resultado << std::endl;
  return 0;
}
