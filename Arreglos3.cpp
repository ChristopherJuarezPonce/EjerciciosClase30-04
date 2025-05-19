#include <iostream>
using namespace std;

int main()
{
    // Declaracion de variables
    int numeros[5] = {5, 8, 12, 3, 7}; // Declaración del arreglo
    int maximo = numeros[0];           // Asumir que el primer elemento es el máximo

    // Encontrar el valor máximo
    for (int i = 1; i < 5; i++)
    {
        if (numeros[i] > maximo)
        {
            maximo = numeros[i]; // Actualizar el valor máximo
        }
    }

    // Mostrar el valor máximo
    cout << "El valor máximo es: " << maximo << endl;

    // Fin del programa
    return 0;
}