#include <iostream>
using namespace std;

// FunciC3n que devuelve el mayor de tres nC:meros
int mayorDeTres(int a, int b, int c)
{
    if (a > b && a > c)
        return a;
    else if (b > c)
        return b;
    else
        return c;
}

bool esPar(int n)
{
    return n % 2 == 0;
}

int main()
{
    int a = 3, b = 9, c = 5;
    cout << "El mayor de los tres es: " << mayorDeTres(a, b, c) << endl;
    if (esPar(mayorDeTres(a, b, c)))
        cout << mayorDeTres(a, b, c) << " Es par" << endl;
    else
        cout << mayorDeTres(a, b, c) << " No es par" << endl;
    return 0;
}
