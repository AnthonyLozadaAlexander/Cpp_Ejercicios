//
// Created by user on 29/12/2024.
//
#include <iostream>

int main()
{
  int matriz[3][3];

  for (int i = 0; i < 3; i++)
  {
   for (int j = 0; j < 3; j++)
   {
       std::cout<< "Ingrese el valor para la posicion [" << i << "][" << j << "]: ";
       std::cin >> matriz[i][j]; // Ingresar valores a la matriz
   }
  }

  std::cout << "Los valores de la matriz son: \n";
    for (int i = 0; i < 3; i++)
    {
      for (int j = 0; j < 3; j++)
      {
        std::cout << matriz[i][j]; // Imprimir valores de la matriz
      }
      std::cout << "\n";
    }

return 0;

}
