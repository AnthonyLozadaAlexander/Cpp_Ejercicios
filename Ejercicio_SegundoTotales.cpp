//
// Created by user on 31/12/2024.
//
#include <iostream>

using namespace std;

int main()
{
   int h, m , s, segundos_totales;

   cout << "Ingrese la hora: "; cin >> h;
   cout << "Ingrese los minutos: "; cin >> m;
   cout << "Ingrese los segundos: "; cin >> s;

   segundos_totales = (h * 3600) + (m * 60) + s;

   cout << "Los segundos totales son: " << segundos_totales << endl;

}