// Incluir librería para operaciones de entrada/salida (input/output)
#include <iostream>

// Incluir librería para operaciones matemáticas (usaremos abs())
#include <cmath>

// Incluir archivo de cabecera personalizado con funciones utilitarias
#include "utils.h"

// Usar el namespace estándar para evitar escribir std:: repetidamente
using namespace std;

// Función principal que compara dos números ingresados por el usuario
void CompararNumeros() {
    // Mostrar título del programa
    cout << "=== COMPARADOR DE NUMEROS ===" << endl;
    
    // Obtener primer número del usuario usando función utilitaria
    double num1 = ObtenerNumero("ingrese el primer numero: ");
    
    // Obtener segundo número del usuario usando función utilitaria  
    double num2 = ObtenerNumero("ingrese el segundo numero: ");
    
    // Mostrar encabezado de resultados
    cout << "\n Resultados: " << endl;
    
    // Comparar si los números son iguales
    if(num1 == num2) {
        cout << "Los numeros son IGUALES" << endl;
    }
    // Comparar si el primer número es mayor que el segundo
    else if(num1 > num2) {
        cout << num1 << " es MAYOR que " << num2 << endl;
    }
    // Si no se cumple ninguna de las anteriores, el primer número es menor
    else {
        cout << num1 << " es MENOR que " << num2 << endl;
    }
    // Mostrar la diferencia absoluta entre los dos números
    cout << "Diferencia: " << abs(num1 - num2) << endl;
}
