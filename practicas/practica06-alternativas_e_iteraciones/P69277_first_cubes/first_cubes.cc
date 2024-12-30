#include <iostream>
#include <cmath>


int main() {
  int numero{0};
  std::cin >> numero;
  for (int i = 0; i <= numero; ++i){
    std::cout << pow(i,3) << ",";
  }  
  return 0;
}

