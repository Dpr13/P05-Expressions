/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file integer_division_and_reminder.cc
  * @author Daniel Pérez Rodríguez alu0101541006@ull.edu.es
  * @date Oct 12 2022
  * @brief El programa ...  
  *        Por definición, ...
  * @bug There are no known bugs
*/

#include <iostream>

int main() {
  int numero{0};

  std::cout << "Introduzca un número: ";
  std::cin >> numero;

  if (numero % 2 == 0) {
    std::cout << "Su número es par \n";
  } else {
    std::cout << "Su número es impar \n";
  }
}
