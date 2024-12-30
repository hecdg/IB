#include <iostream>

int main(){
  int temperatura{0};
  std::cin >> temperatura;
  if (temperatura > 30){
    std::cout << "It's hot" << std::endl;
  }
  if (temperatura >= 100){
    std::cout << "Water would boil" << std::endl;
  }
  if (temperatura < 10){
    std::cout << "It's cold" << std::endl;
  }
  if (temperatura <= 0){
    std::cout << "Water would freeze" << std::endl;
  }
  if (temperatura > 10 && temperatura < 30){
    std::cout << "It's ok" << std::endl;
  }
  return 0;
}
