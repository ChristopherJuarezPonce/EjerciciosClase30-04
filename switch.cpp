#include <iostream>
using namespace std;

int main()
{
    int res, n;

    cout << "Ingrese un número: ";
    cin >> n;

    res = n % 2;
    switch (res)
    {
    case 1:
        cout << "El numero (" << n << ") es inpar" << endl;
        break;
    case 0:
        cout << "El numero (" << n << ") es par" << endl;
        break;
    default:
        cout << "Datos incorrectos" << endl;
        break;
    }

    return 0;
}