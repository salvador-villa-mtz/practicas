#include <windows.h>
#include <iostream>
using namespace std;
int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    string nombre;
    int cal1, cal2, cal3, prom;
    cout << "Dime tu nombre: "; cin >> nombre;
    cout << "Dime tu primera calificación: "; cin >> cal1;
    cout << "Dime tu segunda calificación: "; cin >> cal2;
    cout << "Dime tu tercera calificación: "; cin >> cal3;
    prom = (cal1 + cal2 + cal3) / 3;
    cout << nombre << ", tu promedio es: " << prom << ", y tu calificación final es:";
    if(prom>=90 and prom<=100){
        cout << "A";
    }else 
        if(prom>=80 and prom<90){
            cout << "B";
        }else 
            if(prom>=70 and prom<80){
                cout << "C";
            }else 
                if(prom>=60 and prom<70){
                    cout << "D";
                }else{
                    cout << "NA";
                }
    return 0;
}
