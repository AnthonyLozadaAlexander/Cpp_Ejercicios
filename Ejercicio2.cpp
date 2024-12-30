//
// Created by user on 26/12/2024.
//

#include <iostream>
#include <random>

int main() // funcion principal
{
    int num;

    std::random_device rd; // generador de numeros aleatorios
    std::mt19937 gen(rd()); // generador de numeros aleatorios
    std::uniform_int_distribution<> dis(1, 6); // distribucion de numeros aleatorios

    int secreto = dis(gen); // variable secreto que guarda el numero aleatorio

    std::cout<< "Adivina el numero secreto, Es un numero del 1 al 6\n"; // Mensaje en consola
    std::cout<< "Adivine el numero: \n";
    std::cin>> num; // entrada de dato a la variable num

    if (num == secreto)
    {
        std::cout<<"Felicidades, adivinaste el numero secreto\n"; // Mensaje en consola
    }
    else if (num != secreto)
    {
        for (int i = 0; i <= secreto; i++)
        {
            std::cout << "Sigue intentando hasta adivinar el numero secreto\n";
            std::cin >> num;
            if (num == secreto)
            {
                std::cout<<"Felicidades, adivinaste el numero secreto\n"; // Mensaje en consola
                break;
            }
        }
    }

    return 0;
}
