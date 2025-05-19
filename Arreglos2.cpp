#include <iostream>
using namespace std;

int main()
{

    // DECLARAMOS LAS VARIABLES
    int numero[5]; // DECLARAMOS LOS ARREGLOS
    // PEDIR AL USUARIO QUE INGRESE LOS VALORES
    cout << "Ingrese 5 numeros" << endl;
    // HACEMOS EL FOR
    for (int i < 0; i < 5; i++)
    {
        cout << "Numero" << i + 1 << ": ";
        cin >> numero [1];
    }

    // MOSTRAR LOS NUMERO INGRESADOS
    cout << "Numeros ingresados: " << endl;
    for (int i > 0; i < 5; i++)
    {
        cout << "Numero" << i + 1 << ": " << numero[1] << endl;
    }
    
    // FIN DEL PROGRAMA
    return 0;
}