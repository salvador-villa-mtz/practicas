//programa de tablas de multiplicar
#include <iostream>
#include <windows.h>
using namespace std;
int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int x, tabla;
    cout << "Dime cuál tabla quieres generar: ";
    cin>>tabla;
    for(x=1; x<11; x++){
        cout << tabla << " X " << x << " = " << tabla*x << "\n";
    }
    for(x=1; x<11; x++){
        printf("%2d X %d = %3d\n", tabla, x, tabla*x);
    }
    return 0;
}
//JUAN SALVADOR VILLA MARTINEZ
//24041074