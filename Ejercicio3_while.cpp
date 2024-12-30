//
// Created by user on 26/12/2024.
//
#include <iostream>
#include <random>

int main()
{
    int num, secreto;

    std::random_device rd; // generador de numeros aleatorios
    std::mt19937 gen(rd()); // generador de numeros aleatorios
    std::uniform_int_distribution<> dis(1, 6); // distribucion de numeros aleatorios

    secreto = dis(gen); // variable secreto que guarda el numero aleatorio

    do // hacer
    {
        std::cout << "Adivina el numero secreto, es un numero del 1 al 6\n"; // Mensaje en consola
        std::cout << "Adivine el numero: \n";
        std::cin >> num;

        if (num == secreto)
        {
            std::cout << "Felicidades, adivinaste el numero secreto\n";
        }
        else
        {
          std::cout << "Sigue intentando hasta adivinar el numero secreto\n";
        }

    } while (num != secreto); // mientras (num sea diferente a secreto)

    return 0;
}
