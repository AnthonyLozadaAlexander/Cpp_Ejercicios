#include <iostream>

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    int num;
    std::cout << "Ingrese un numero: "; // mensaje para el usuario
    std::cin >> num; // entrada de dato a la variable num

    if (num % 2 == 0) // operador modulo, num % 2 hara una division la cual entregara el residuo si es igual a 0, es par
    {
        std::cout << "El numero es par" << std::endl;
    }
    else // si no es igual a 0, es impar
    {
        std::cout << "El numero es impar" << std::endl;
    }
    return 0;
}