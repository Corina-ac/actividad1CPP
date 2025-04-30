#include <iostream>
#include "utils.h"
using namespace std;
void SumarNumeros(){
double num1= ObtenerNumero("ingrese el primer  numero: ");
double num2= ObtenerNumero("ingrese el segundo numero: ");
double suma= num1+num2;
cout<< "La suma de: "<< num1 <<" & "<< num2 << " es: " << suma<<endl;
}
