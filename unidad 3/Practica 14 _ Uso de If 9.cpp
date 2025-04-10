#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int n;
    cout << "Dame un número para determnar si es positivo o negaitvo: ";
    cin >> n;
    n > 0 ? cout << "El número es positivo\n" : cout << "El número es negativo\n";
    system("pause");
    if (n > 0)
    {
        cout << "El número es positivo\n";
    }
    else
    {
        cout << "El número es negativo\n";
    }
    system("pause");
    if (n < 0)
    {
        cout << "El número es negativo\n";
    }
    else
    {
        cout << "El número es cero";
    }
    return 0;
}
//JUAN SALVADOR VILLA MARTINEZ
//24041074