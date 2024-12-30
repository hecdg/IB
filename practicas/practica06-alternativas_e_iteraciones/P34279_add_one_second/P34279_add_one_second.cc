#include <iostream>
void addOneSecond(int& horas,int& minutos,int& segundos){
  
  segundos++;

  if (segundos == 60){
    segundos = 0;
    minutos++;
  }
 
  if (minutos == 60){
    minutos = 0;
    horas++;
  }
  if (horas == 24){
    horas = 0;
  }

}


int main() {
  int horas,minutos,segundos{0};
  std::cin >> horas >> minutos >> segundos;
  if (horas > 24 || minutos > 60 || segundos > 60) {
    std::cout << "Uno de los valores introducidos no es válido" << std::endl;
  }
  else {
    addOneSecond(horas, minutos, segundos);
    std::cout << (horas < 10 ? "0" : "") << horas << ":"
              << (minutos < 10 ? "0" : "") << minutos << ":"
              << (segundos < 10 ? "0" : "") << segundos << std::endl;

   		
}
  return 0;
}

