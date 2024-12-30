//
// Created by user on 29/12/2024.
//
#include <iostream>

// Funcion para calcular el maximo comun divisor

int mcd(int a, int b) // funcion para mcd
{
    if (b == 0)
    {
       return a;
    }
    else
    {
        return mcd(b, a % b);
    }
}

int main()
{
    int num1, num2;
    std::cout << "Ingrese el primer numero: "; std::cin >> num1;
    std::cout << "Ingrese el segundo numero: "; std::cin >> num2;

    std::cout << "El maximo comun divisor de " << num1 << " y " << num2 << " es: " << mcd(num1,num2);
}