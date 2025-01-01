//
// Created by user on 31/12/2024.
//
#include <iostream>

// sumar N números siguiendo la siguiente secuencia lógica (1-2+3-4+5-6+7...............N), mostrar el total de la suma

using namespace std;

int main()
{
   int n, suma, i;

   cout << "Ingrese hasta que numero desea sumar: "; cin >> n;
   suma = 0;

   for (i = 1; i <= n; i++)
   {
    if (i % 2 == 0)
    {
      suma = suma - i;
    }
    else
    {
      suma = suma + i;
    }
   }
   cout << "La suma total es: " << suma;
}