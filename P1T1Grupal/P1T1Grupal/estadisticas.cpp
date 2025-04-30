// Incluir librería estándar para operaciones de entrada/salida
#include <iostream>

// Incluir librería para usar la estructura de datos vector
#include <vector>

// Incluir archivo de cabecera personalizado con funciones utilitarias
#include "utils.h"

// Usar el namespace estándar para evitar escribir std:: repetidamente
using namespace std;

// Función principal que calcula estadísticas básicas de un conjunto de números
void Estadisticas() {
    // Solicitar al usuario la cantidad de números a procesar
    int n = readInt("¿Cuántos números desea ingresar? ");
    
    // Crear un vector de tamaño 'n' para almacenar los números
    vector<double> nums(n);
    
    // Bucle para llenar el vector con los números ingresados por el usuario
    for (int i = 0; i < n; i++) {
        // Solicitar cada número y almacenarlo en el vector
        nums[i] = readDouble("Ingrese número " + to_string(i+1) + ": ");
    }
    
    // Inicializar variables para cálculos estadísticos:
    // max - almacenará el valor máximo (inicializado con el primer elemento)
    // min - almacenará el valor mínimo (inicializado con el primer elemento)
    // sum - acumulará la suma total de los números
    double max = nums[0], min = nums[0], sum = 0;
    
    // Bucle para recorrer todos los números del vector
    for (double num : nums) {
        // Actualizar el valor máximo si se encuentra un número mayor
        if (num > max) max = num;
        
        // Actualizar el valor mínimo si se encuentra un número menor
        if (num < min) min = num;
        
        // Acumular el valor actual a la suma total
        sum += num;
    }
    
    // Mostrar los resultados estadísticos:
    
    // Mostrar el valor máximo encontrado
    cout << "Máximo: " << max << endl;
    
    // Mostrar el valor mínimo encontrado
    cout << "Mínimo: " << min << endl;
    
    // Mostrar el promedio (suma total dividida por cantidad de números)
    cout << "Promedio: " << sum/n << endl;
}
