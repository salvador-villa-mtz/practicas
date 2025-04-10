#include <iostream>
#include <Windows.h>
using namespace std;
//Programa de validacion de NIP 
int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int nip=123; //int nip; nip=123;
    int intento=0;
    cout << "Teclea tu NIP: ";
    cin >> intento;
    if (intento==nip){
        cout << "**Correcto**";
    }
    return 0;
}