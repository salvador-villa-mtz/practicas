#include <windows.h>
#include <iostream>
using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    char c;
    int opcion;
    cout << "Dame un valor binario 0/1: ";
    cin >> c;
    switch (c)
    {
    case '0':
        cout << "Falso o apagados\n";
        break;
    case '1':
        cout << "Verdadero o encendidos\n";
        break;
    default:
        cout << "Tecleaste un valor incorrecto\n";
    }
    system("pause");
    system("cls");
    printf("1.- QUÍMICA\n"); // cout<<"1.- QUIMICA\n";
    printf("2.- FÍSICA\n");
    printf("3.- MATEMATICAS\n");
    printf("4.- RECREO\n");
    printf("SELECCIONE UNA OPCIÓN: ");
    cin >> opcion;
    switch (opcion)
    {
    case 1:
        printf("SELECCIONASTE QUÍMICA");
        break;
    case 2:
        printf("SELECCIONASTE FÍSICA");
        break;
    case 3:
        printf("SELECCIONASTE MATEMATICAS");
        break;
    case 4:
        puts("SELECCIONASTE RECREO");
        break;
    default:
        printf("\nSELECCIONASTE UNA OPCIÓN INCORRECTA\n");
    }
    return 0;
}
//JUAN SALVADOR VILLA MARTINEZ
//24041074