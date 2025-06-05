#include <windows.h>
#include <iostream>
using namespace std;

void obtener(char oracion1[100], char oracion2[100]);
int comparar(char oracion1[100], char oracion2[100]);
void valor(int count);
int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    char oracion1[100] = "", oracion2[100] = "";
    int count;
    obtener(oracion1, oracion2);
    count = comparar(oracion1, oracion2);
    valor(count);
    return 0;
}
void obtener(char oracion1[], char oracion2[])
{
    cout << "Ingrese la primera oracion: ";
    gets(oracion1);
    cout << "Ingrese la segunda oracion: ";
    gets(oracion2);
}
int comparar(char oracion1[], char oracion2[])
{
    int i, count = 0;
    for (i = 0; i < 100; i++)
    {
        if (oracion1[i] != oracion2[i])
        {
            count++;
        }
    }
    return count;
}
void valor(int count)
{
    if (count == 0)
    {
        cout << "Las oraciones son iguales" << endl;
    }
    else
    {
        cout << "Las oraciones son diferentes" << endl;
    }
}
