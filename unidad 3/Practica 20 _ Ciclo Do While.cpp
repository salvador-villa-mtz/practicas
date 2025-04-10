#include <windows.h>
#include <iostream>
using namespace std;
void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int x, edad;
    char nom[10];
    // Se puede usar p/una cantidad prestablecida de vueltas
    x = 1; /*si no se inicializa al menos se ejecuta una vez*/
    do
    {
        cout << x << "\n";
        x++; /*variación*/
    } while (x < 10); /*condición*/
    system("pause");
    system("cls");
    do
    {
        cout << "Dame la edad, <<0 para terminar>> ";
        cin >> edad; /*variación*/
    } while (edad != 0);
    system("pause");
    do
    {
        system("cls");
        gotoxy(10, 0), cout << "Menu Principal";
        gotoxy(10, 1), cout << "1.- Lee el nombre";
        gotoxy(10, 2), cout << "2.- Lee la edad";
        gotoxy(10, 3), cout << "3.- Imprime los datos";
        gotoxy(10, 4), cout << "4.- Terminar";
        gotoxy(10, 5), cout << "Selecciona una opción <1-4> ";
        do
        {
            gotoxy(40, 5);
            cout << "              ";
            gotoxy(40, 5);
            cin >> x;
        } while (x < 1 or x > 4);

        switch (x)
        {
        case 1:
            cout << "Dame tu nombre ";
            fflush(stdin);
            gets(nom);
            break;
        case 2:
            cout << "Dame tu edad ";
            cin >> edad;
            break;
        case 3:
            cout << "Nombre: " << nom << "\n";
            cout << "Edad: " << edad << "\n",
                system("pause");
        }
        while (x != 4);
        return 0;
    }
}