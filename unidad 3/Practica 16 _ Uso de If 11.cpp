#include <windows.h>
#include <iostream>
using namespace std;
int main()
{
    float numerador, denominador;
    cout << "Dame el numerador (dividendo)";
    cout << "Dame el denominador (divisor)";
    if (denominador) // el denominador es !=0, entonces es cierto
    {
        cout << numerador << "/" << denominador << "=" << numerador / denominador << "\n";
    }
    else
    {
        cout << "La divison sobre cero no se permite\n";
    }
    system("pause");
    // preguntando si es cero de manera explicita
    if (denominador != 0) // el denominador es !=0, entonces es cierto
    {
        cout << numerador << "/" << denominador << "=" << numerador / denominador << "\n";
    }
    else
    {
        cout << "La divison sobre cero no se permite\n";
    }
    system("pause");
    if (!denominador)
    {
        cout << "La divison sobre cero no se permite\n";
    }
    else
    {
        cout << numerador << "/" << denominador << "=" << numerador / denominador << "\n";
    }
}
