#include <iostream> // Permite usar funciones de entrada y salida como cout y cin
#include <time.h>   // Se usa para trabajar con la hora del sistema, útil para generar números aleatorios
#include <windows.h> // Se usa para configurar la consola y mostrar acentos correctamente (solo en Windows)
using namespace std; // Evita tener que escribir std:: antes de cout, cin, etc.

int main() // Función principal donde inicia el programa
{
    SetConsoleCP(CP_UTF8); // Configura la consola para aceptar caracteres UTF-8 (acentos, ñ, etc.)
    SetConsoleOutputCP(CP_UTF8); // Configura la salida de la consola para UTF-8

    int vector[10]; // Declara un arreglo (vector) de 10 posiciones para guardar números enteros
    int i, j, n, tempo; // Declara variables auxiliares: i y j para ciclos, n para cantidad de elementos, tempo para intercambio

    srand(time(0)); // Inicializa la "semilla" de números aleatorios con la hora actual (para que los números cambien cada vez)

    // Se pide al usuario que ingrese cuántos elementos quiere ordenar, entre 2 y 10
    do {
        cout << "Dime cuantos elementos quieres ordenar? <2-10>: "; // Mensaje para el usuario
        cin >> n; // Guarda el número que el usuario escribe en la variable 'n'
    } while (n < 2 || n > 10); // Repite mientras el número no esté entre 2 y 10

    // Ciclo para llenar el vector con números aleatorios
    for (i = 0; i < n; i++) {
        vector[i] = rand() % 10; // Genera un número aleatorio entre 0 y 9 y lo guarda en la posición i del vector
        cout << "Vector[" << i << "] = " << vector[i] << "\n"; // Muestra el valor que se generó para esa posición
    }

    // Ciclo para ordenar el vector usando el método de burbuja (bubble sort)
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) { // Compara la posición actual con todas las siguientes
            if (vector[i] > vector[j]) { // Si el valor actual es mayor que el siguiente
                tempo = vector[i]; // Guarda el valor actual en una variable temporal
                vector[i] = vector[j]; // El valor menor se mueve a la posición actual
                vector[j] = tempo; // Se coloca el valor original en la otra posición
            }
        }
    }

    // Muestra el vector ya ordenado
    cout << "Vector ordenado\n"; 
    for (i = 0; i < n; i++) 
        cout << "Vector[" << i << "] = " << vector[i] << "\n"; // Imprime cada elemento del vector en orden
    
    return 0; // Indica que el programa terminó correctamente
}