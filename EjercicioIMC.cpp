//
// Created by user on 15/12/2024.
//
#include <iostream>

int main() {

   double peso, altura, IMC;
   std::cout<< "Ingrese su peso en kg: ", std::cin>> peso;
   std::cout<< "Ingrese su altura en metros: ", std::cin>> altura;

   IMC = peso / (altura * altura);
   std::cout<< "Su IMC es: \n" << IMC << std::endl;

   return 0;

}
