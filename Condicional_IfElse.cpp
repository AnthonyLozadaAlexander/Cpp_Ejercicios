//
// Created by user on 01/01/2025.
//
#include <iostream>
using namespace std;

int main()
{
   int edad;
   cout << "Introduce tu edad: ";
   cin >> edad;

   if (edad >= 18)
   {
     cout <<"Su edad es: " << edad << " anios, por lo tanto es mayor de edad." << endl;
   }
   else
   {
      cout <<"Su edad es: " << edad << " anios, por lo tanto es menor de edad." << endl;
   }

}