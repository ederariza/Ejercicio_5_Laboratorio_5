
/*
Ejercicio 6. Escriba un programa que pida dos números A y B e imprima en pantalla la potencia
AB, sin hacer uso de librerías matemáticas.
Ej: si se ingresan 5 y 3 se debe imprimir:
5^3=125
*/

#include <iostream>

using namespace std;

int main(){

    int numero_A;
    int numero_B;
    cout << "Ingrese el numero A: ";
    cin >> numero_A;
    cout << "Ingrese el numero B: ";
    cin >> numero_B;

    int suma = 0;
    for(int i=0; i<=numero_B; i++){

        if(numero_B==0){
            suma = 1;
            cout << "La potencia de " << numero_A << "^" << numero_B << "=" << suma << endl;
            break;
        }

        else if(i == 1){
            suma = numero_A;
        }

        else{
            suma = suma * numero_A;
        }

    }

    cout << "La potencia de " << numero_A << "^" << numero_B << "=" << suma << endl;
    return 0;
}
