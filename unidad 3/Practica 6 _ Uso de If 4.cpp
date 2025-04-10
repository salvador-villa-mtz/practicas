#include <iostream>
#include <windows.h>
using namespace std;
int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int uno, dos, tres, menor;
    char nombre[20];
    cout << "INSTITUTO TECNOLOGICO DE DURANGO";
    cout << "Fundamentos de Programación";
    cout << "Programa que determina cuál es el menor de tres números";
    cout << "Dime tu nombre: ";
    gets(nombre);
    cout << "Dime el primer número: "; cin >> uno;
    cout << "Dime el segundo número: "; cin >> dos;
    cout << "Dime el tercer número: "; cin >> tres;
    if(uno<dos and uno<tres){
        menor = uno;
    }
    else if(dos<uno and dos<tres){
        menor = dos;
    }
    else{
        menor = tres;
    }
    cout << "El número menor es: " << menor;
    return 0;
}
//JUAN SALVADOR VILLA MARTINEZ
//24041074