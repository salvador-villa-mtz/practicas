#include <iostream>
#include <windows.h>
using namespace std;
// juan salvador villa martinez
// num de control 24041074
// lus angel rico arreola
// num control 24041046
int main(){
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    int i, count=0;
    char arreglo1[100]="", arreglo2[100]="";
    cout << "Ingrese una cadena de caracteres: \n";
    gets(arreglo1); 
    cout << "Ingrese otra cadena de caracteres: \n";
    gets(arreglo2);
    for (i = 0; i < 100; i++){
        if (arreglo1[i]!= arreglo2[i]){
            count++;  
        }
    }
    cout <<" "<<count;
    if (count == 0){
        cout << "Las cadenas son iguales." << endl;
    }
    else{
        cout << "Las cadenas son diferentes." << endl;
    }
    return 0;
}