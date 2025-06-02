#include <iostream>
using namespace std;

// FUNCION QUE VERIFICA SI ES PAR
bool esPar(int n)
{
    return n % 2 == 0;
}

int main()
{

    // HACEMOS LA OPERACION
    int num = 3;
    if (esPar(num))
        cout << num << " Es par" << endl;
        else 
        cout << num << " No es par" << endl;
        return 0;
}