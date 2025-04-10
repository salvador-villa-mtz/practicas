#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y){
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int uno, dos, tres, mayor;
    char nombre[20];
    gotoxy(25,2);
    cout << "INSTITUTO TECNOLOGICO DE DURANGO";
    gotoxy(28,3);
    cout << "Fundamentos de Programación";
    gotoxy(14,4);
    cout << "Programa que determina cuál es el mayor de tres números";
    gotoxy(10,5);
    cout << "Dime tu nombre: ";
    gets(nombre);
    gotoxy(10,6); cout << "Dime el primer número: "; cin >> uno;
    gotoxy(10,7); cout << "Dime el segundo número: "; cin >> dos;
    gotoxy(10,8); cout << "Dime el tercer número: "; cin >> tres;
    if(uno > dos && uno > tres){
        mayor = uno;
    }
    else if(dos > uno && dos > tres){
        mayor = dos;
    }
    else{
        mayor = tres;
    }
    gotoxy(10,10); cout << "El número mayor es: " << mayor;
    return 0;
}