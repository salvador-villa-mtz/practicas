// 24041062 Sifuentes Domínguuez Jorge Alejandro
// 24041074 Villa Martínez Juan Salvador
#include <iostream>
#include <stdio.h>
#include <time.h>
#include <windows.h>
using namespace std;
void capturar(char palabra1[100]); // Inicia la función
void validacion(char palabra1[100]);
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    char palabra1[100];
    capturar(palabra1); // Llama a la función capturar para obtener la palabra del usuario
    validacion(palabra1);
    return 0;
}

void capturar(char palabra1[]) // Función para capturar la palabra
{
    cout << "Dame una palabra: ";
    gets(palabra1);
    int len = strlen(palabra1);
}

void validacion(char palabra1[]) // Función para validar y transformar la palabra
{
    int len = strlen(palabra1);
    for (int i = 0; i < len; i++)
    {
        palabra1[i] = toupper(palabra1[i]);
    }
    for (int i = 0; i < len; i++)
    {
        switch (palabra1[i])
        {
        case 'S':
            palabra1[i] = 'U';
            break;
        case 'U':
            palabra1[i] = 'S';
            break;
        case 'F':
            palabra1[i] = 'A';
            break;
        case 'A':
            palabra1[i] = 'F';
            break;
        case 'M':
            palabra1[i] = 'E';
            break;
        case 'E':
            palabra1[i] = 'M';
            break;
        case 'L':
            palabra1[i] = 'I';
            break;
        case 'I':
            palabra1[i] = 'L';
            break;
        case 'C':
            palabra1[i] = 'O';
            break;
        case 'O':
            palabra1[i] = 'C';
            break;
        }
    }
    cout << "La palabra es: " << palabra1 << endl;
}