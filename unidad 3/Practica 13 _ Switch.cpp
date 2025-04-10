#include <windows.h>
#include <iostream>
using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int d, m, a;
    cout << "Dame una fecha en este formato dd/mm/aaaa: ";
    scanf("%2d%2d%4d",&d,&m,&a);
    switch (m)
    {
    case 1:
    case 2:
    case 3:
    case 4:
        printf("Primer cuatrimestre\n");
        break;
    case 5:
    case 6:
    case 7:
    case 8:
        printf("Segundo cuatrimestre\n");
        break;
    case 9:
    case 10:
    case 11:
    case 12:
        printf("Tercer cuatrimestre\n");
        break;
    default:
        printf("Mes no válido\n");
    }
    return 0;
}
//JUAN SALVADOR VILLA MARTINEZ
//24041074