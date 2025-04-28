//   ESPE
//   Autor: John Cruz
//   Fecha: 28/04/2025
// Estructura de archivos:
//   main.cpp          menú principal
//   hola.cpp          imprime “Hola Mundo”
//   sumar.cpp         suma dos números
//   comparar.cpp      mayor / menor / igual
//   estadisticas.cpp  máximo, mínimo y promedio
//   fizzbuzz.cpp      lógica FizzBuzz
//   utils.h / utils.cpp  utilidades de entrada segura


#include <iostream>
#include "utils.h"

// Declaraciones (definidas en otros archivos)
void hello();
//void sumTwo();
//void compareTwo();
//void stats();
//void fizzBuzz();

int main() {
    while (true) {
        std::cout << "\n=== Menú ===\n";
        std::cout << "1) Imprimir Hola Mundo\n";
        std::cout << "2) Sumar dos números\n";
        std::cout << "3) Comparar dos números (mayor, menor, igual)\n";
        std::cout << "4) Estadísticas (n números)\n";
        std::cout << "5) FizzBuzz\n";
        std::cout << "0) Salir\n";

        int choice = readInt("Seleccione una opción: ");
        std::cout << '\n';
        switch (choice) {
            case 1: hello(); break;
            //case 2: sumTwo(); break;
            //case 3: compareTwo(); break;
            //case 4: stats(); break;
            //case 5: fizzBuzz(); break;
            case 0:
                std::cout << "¡Hasta luego!\n";
                return 0;
            default:
                std::cout << "Opción no válida\n";
        }
    }
}