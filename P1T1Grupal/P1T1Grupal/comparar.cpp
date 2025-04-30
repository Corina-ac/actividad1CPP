#include <iostream>
#include <cmath>
#include "utils.h"
using namespace std;
void CompararNumeros(){
cout << "=== COMPARADOR DE NUMEROS ===" << endl;
double num1= ObtenerNumero("ingrese el primer numero: ");
double num2= ObtenerNumero("ingrese el segundo numero: ");
cout<< "\n Resultados: "<<endl;
    if(num1 == num2) {
        cout << "Los numeros son IGUALES" << endl;
    } else if(num1 > num2) {
        cout << num1 << " es MAYOR que " << num2 << endl;
    } else {
        cout << num1 << " es MENOR que " << num2 << endl;
    }
cout<< "Diferencia: "<< abs (num1 -num2)<< endl;
}
