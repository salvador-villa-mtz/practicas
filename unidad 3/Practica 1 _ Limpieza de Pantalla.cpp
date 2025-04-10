#include <iostream>
#include <windows.h>
using namespace std;
int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    cout << "Hola, esta es una prueba de limpieza de pantalla." << endl;
    system("pause");
    system("cls"); //Limpia la pantalla
    system("pause");
    cout << "La pantalla ha sido limpiada." << "\n";
    return 0;
}
//JUAN SALVADOR VILLA MARTINEZ
//24041074