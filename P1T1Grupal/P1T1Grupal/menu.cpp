#include <iostream>
#include "utils.h"
#include "menu.h"
#include "hola.h"
#include "sumar.h"
#include "comparar.h"
#include "estadisticas.h"
#include "fizzbuzz.h"
using namespace std;
void MostrarMenu(){
char opc;
cout<< "Menu de opciones"<<endl;
do{
    cout << "1: Saludito" << endl;
        cout << "2: Suma de numeros" << endl;
        cout << "3: Comparacion entre dos numeros" << endl;
        cout << "4: Estadisticas" << endl;
        cout << "5: FizzBuzz" << endl;
        cout << "6: Salir del programa" << endl;
        cin >> opc;
        cin.ignore();
        switch(opc){
        case '1':
            Saludo();
            break;
        case '2':
            SumarNumeros();
            break;
        case '3':
            CompararNumeros();
            break;
        case'4':
            Estadisticas();
            break;
        case'5':
            FizzBuzz();
            break;
        case'6':
            cout<<"Bye bye"<<endl;
            break;
    default:
        cout<<"opcion no valida"<<endl;}
}while(opc!= '6');
}
