#include <iostream>
#include <windows.h>
using namespace std;
int main(){
    //uso de if
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int cal;
    cout << "Dime una calificación: ";
    cin >> cal;
    if(cal >= 70)
        cout << "Aprobatoria\n";
    system("pause");
    system("cls");
    cout << "Dime otra calificación: ";
    cin >> cal;
    if(cal >= 70)
      cout << "No Suficiente\n";
    system("pause");
    system("cls");
    //lo mismo con ?
    cout << "Dime una calificación: (Evaluando con ?)";
    cin >> cal;
    cal >= 70 ? cout << "Suficiente\n" : cout << "No Suficiente\n";
    //if con mas de una instrucción
    cout << "Dime una calificación: ";
    cin >> cal;
    if(cal >= 70){
        printf("La calificación obtenida es : ");
        cout<<"Suficiente\n";
    }
    else{
        printf("La calificación obtenida es: ");
        cout<<"No Suficiente\n";
    }
    return 0;
}