// Incluir librería estándar para operaciones de entrada/salida
#include <iostream>

// Incluir archivo de cabecera personalizado con funciones utilitarias
#include "utils.h"

// Usar el namespace estándar para evitar escribir std:: repetidamente
using namespace std;

// Función que implementa el juego FizzBuzz
void FizzBuzz() {
    // Solicitar al usuario un número entero positivo
    int num = ObtenerEntero("ingrese un numero ENTERO");
    
    // Bucle para iterar desde 1 hasta el número ingresado
    for(int i = 1; i <= num; i++) {
        // Primero verificar si es múltiplo de 15 (3 y 5)
        if(i % 15 == 0) {
            cout << "FizzBuzz" << endl;
        }
        // Si no es múltiplo de 15, verificar si es múltiplo de 3
        else if(i % 3 == 0) {
            cout << "Fizz" << endl;
        }
        // Si no es múltiplo de 3, verificar si es múltiplo de 5
        else if(i % 5 == 0) {
            cout << "Buzz" << endl;
        }
        // Si no cumple ninguna condición anterior, imprimir el número
        else {
            cout << i << endl;
        }
    }
}
