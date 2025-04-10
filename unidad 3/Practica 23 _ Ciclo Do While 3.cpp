#include <iostream>
#include <windows.h>
using namespace std;
int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int x, y=1;
    cout << "Lectura de 5 números enteros usando do while\n";
    do{
        cout << "Dame un número que no sea cero (intento #" << y <<  ")\n";
        cin>>x;
        if(x==0){
            continue;
        }
        cout << "Por aquí solo pasa cuendo el número es diferente de cero\n";
        y++;
    }while(y<6);
    system("pause");
    system("cls");
    /*en ciclos do while o while con contador un continue afecta el número
    de vueltas originales, si estan definidas 5 vueltas, se ejecutaran 5
    vueltas validas, aunque sse hayam ejecutado 10 no validas, dando un 
    total de 15 repeticiones*/
    cout << "Lectura de 5 números enteros usando un for estandar\n";
    for(y=1; y<6; y++){
        cout << "Dame un número que no sea 0 (intento #" << y << ")\n";
        cin>>x;
        if(x==0){
            continue;
        }
        cout << "Por aquí solo pasa cuendo el número es diferente de cero\n";
        //y++; para que se comporte como el do o el while
    }
}
//JUAN SALVADOR VILLA MARTINEZ
//24041074