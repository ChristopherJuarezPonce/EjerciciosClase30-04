#include <iostream>
using namespace std;

int main()
{
    // Declaracion de las variables para almacenar
    float Num1, Num2, Resultado;
    int Options;

    // Solicitar al usuario que ingrese dos numeros
    cout << "Ingrese el primer número: ";
    cin >> Num1;
    cout << "Ingrese el segundo número: ";
    cin >> Num2;

    // Mostrar el menú de opciones para elegir la operación matemática
    cout << "Seleccione una operación:" << endl;
    cout << "1. Suma" << endl;
    cout << "2. Resta" << endl;
    cout << "3. Multiplicación" << endl;
    cout << "4. División" << endl;
    cout << "Opción: ";
    cin >> Options;

    // Usar un switch para realizar la operación matemática según la elección del usuario
    switch (Options)
    {
    case 1:
        Resultado = Num1 + Num2;
        cout << "El Resultado de la suma es: " << Resultado << endl;
        break;
    case 2:
        Resultado = Num1 - Num2;
        cout << "El Resultado de la resta es: " << Resultado << endl;
        break;
    case 3:
        Resultado = Num1 * Num2;
        cout << "El Resultado de la multiplicación es: " << Resultado << endl;
        break;
    case 4:
        // Verificar si el segundo número es cero antes de realizar la división
        if (Num2 != 0)
        {
            Resultado = Num1 / Num2;
            cout << "El Resultado de la división es: " << Resultado << endl;
        }
        else
        {
            cout << "Error: División por cero no permitida." << endl;
        }
        break;
    default:
        cout << "Opción no válida. Por favor, elija una opción del 1 al 4." << endl;
        return 1; // Salida temprana del programa si la opción no es válida
    }

    // Usar if-else para verificar si el resultado es positivo, negativo o cero
    if (Resultado > 0)
    {
        cout << "El Resultado es positivo." << endl;
    }
    else if (Resultado < 0)
    {
        cout << "El Resultado es negativo." << endl;
    }
    else
    {
        cout << "El Resultado es cero." << endl;
    }

    return 0; // Fin del programa
}