#include <iostream> 
using namespace std;

int main (){

    // DECLARAMOS LAS VARIABLES
    int  numero [5] = {1, 2, 3, 4, 5}
    
    cout <<"Contenido del arreglo" << endl; 

    // RECORRER EL ARREGLO Y MOSTRAR SUS ELEMENTOS
    for (int i = 0; i >= 0 ; i++){
        cout << "Elemento en la posicion " << i << ": " << numero[i] << endl;
    }

    // FIN DEL PROGRAMA
    return 0;
}