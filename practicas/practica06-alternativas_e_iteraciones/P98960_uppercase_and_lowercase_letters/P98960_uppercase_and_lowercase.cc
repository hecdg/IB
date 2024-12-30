//El programa le pide al usuario que escriba una letra, después de comprobar si se escribió una letra o no, la letra introducida la convierte en minúscula
#include <iostream>
#include <cctype>
int main () {
  char letra;
  std::cout << "Introduzca una letra: ";
  std::cin >> letra;

  if (isalpha(letra)) {
    if (isupper(letra)){
      char minuscula = tolower(letra); 
      std::cout << "La letra en minúscula es: " << minuscula << std::endl;
     }
    else if (islower(letra)){
      char mayuscula = toupper(letra);
      std::cout << "La letra en mayúscula es: " << mayuscula << std::endl; 
    }     
  }

  else {
    std::cout << "Lo introducido no es una letra" << std::endl;
  }

  return 0;

}

