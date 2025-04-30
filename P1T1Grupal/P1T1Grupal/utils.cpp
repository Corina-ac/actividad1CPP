// Incluir librería estándar para operaciones de entrada/salida
#include <iostream>

// Incluir librería para usar límites numéricos
#include <limits>

// Usar el namespace estándar para evitar escribir std:: repetidamente
using namespace std;

// Función para obtener un número decimal (double) válido del usuario
// Parámetro: mensaje - texto que se muestra al solicitar el número
// Retorna: el número válido ingresado por el usuario
double ObtenerNumero(const string &mensaje) {
    // Bucle infinito que solo termina cuando se ingresa un número válido
    while(true) {
        // Mostrar el mensaje solicitando el número
        cout << mensaje;
        
        // Variable para almacenar la entrada del usuario como string
        string input;
        cin >> input;
        
        // Intentar convertir el string a double
        try {
            // Retornar el número convertido si la conversión es exitosa
            return stod(input);
        }
        catch(...) {  // Capturar cualquier error de conversión
            // Mostrar mensaje de error
            cout << "Error: ingrese un numero valido" << endl;
            
            // Limpiar el estado de error de cin
            cin.clear();
            
            // Descartar toda la entrada incorrecta del buffer
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }
}

// Función para obtener un número entero (int) válido del usuario
// Parámetro: mensaje - texto que se muestra al solicitar el número
// Retorna: el número entero válido ingresado por el usuario
int ObtenerEntero(const string &mensaje) {
    // Bucle infinito que solo termina cuando se ingresa un entero válido
    while(true) {
        // Mostrar el mensaje solicitando el número
        cout << mensaje;
        
        // Variable para almacenar la entrada del usuario como string
        string input;
        cin >> input;
        
        // Intentar convertir el string a entero
        try {
            // Retornar el número convertido si la conversión es exitosa
            return stoi(input);
        }
        catch(...) {  // Capturar cualquier error de conversión
            // Mostrar mensaje de error específico para enteros
            cout << "ERROR: debe ingresar un numero ENTERO valido" << endl;
            
            // Limpiar el estado de error de cin
            cin.clear();
            
            // Descartar toda la entrada incorrecta del buffer
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }
}
