// Incluir librería estándar para operaciones de entrada/salida
#include <iostream>

// Incluir archivos de cabecera personalizados con funciones del programa
#include "utils.h"      // Funciones utilitarias comunes
#include "menu.h"       // Declaración del menú
#include "hola.h"       // Funciones de saludo
#include "sumar.h"      // Funciones de suma
#include "comparar.h"   // Funciones de comparación
#include "estadisticas.h" // Funciones estadísticas
#include "fizzbuzz.h"   // Función del juego FizzBuzz

// Usar el namespace estándar para evitar escribir std:: repetidamente
using namespace std;

// Función principal que muestra y maneja el menú de opciones
void MostrarMenu() {
    // Variable para almacenar la opción seleccionada por el usuario
    char opc;
    
    // Mostrar título del menú
    cout << "Menu de opciones" << endl;
    
    // Bucle do-while para mantener el menú activo hasta que el usuario elija salir
    do {
        // Mostrar las opciones disponibles
        cout << "1: Saludito" << endl;
        cout << "2: Suma de numeros" << endl;
        cout << "3: Comparacion entre dos numeros" << endl;
        cout << "4: Estadisticas" << endl;
        cout << "5: FizzBuzz" << endl;
        cout << "6: Salir del programa" << endl;
        
        // Leer la opción seleccionada por el usuario
        cin >> opc;
        // Limpiar el buffer de entrada para evitar problemas con futuras lecturas
        cin.ignore();
        
        // Estructura switch para manejar las diferentes opciones
        switch(opc) {
            case '1':  // Opción 1: Mostrar saludo
                Saludo();
                break;
                
            case '2':  // Opción 2: Sumar números
                SumarNumeros();
                break;
                
            case '3':  // Opción 3: Comparar números
                CompararNumeros();
                break;
                
            case '4':  // Opción 4: Mostrar estadísticas
                Estadisticas();
                break;
                
            case '5':  // Opción 5: Jugar FizzBuzz
                FizzBuzz();
                break;
                
            case '6':  // Opción 6: Salir del programa
                cout << "Bye bye" << endl;
                break;
                
            default:  // Opción no válida
                cout << "Opcion no valida" << endl;
        }
        
    } while(opc != '6');  // Continuar mostrando el menú hasta que se seleccione salir (opción 6)
}
