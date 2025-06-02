#include <iostream>
using namespace std;

// FUNCION QUE SUMA DOS NUMEROS ENTEROS 
int suma (int a, int b){
    return a + b;
}

int main()
{
    
    // HACEMOS LA OPERACION
    int num1 = 5, num2 = 7;
    cout << "La suma es: " << suma(num1, num2) << endl;
    return 0;
    
}