#include <windows.h>
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Dame una numero para determinar si es positivo o negativo: ";
    cin >> n;
    if (n % 2) // el resultado es cero y en C, cero es falso
        cout << "El numero es impar\n";
    else
        cout << "El numero es par\n";
    system("pause");
    // condicion en forma explicito
    if (n % 2 == 0)
        cout << "El numero es par\n";
    else
        cout << "El numero es impar\n";
    return 0;
}
