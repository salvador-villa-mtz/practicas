#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;
int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int x, y;
    float z;
    //Imprime números de 1 en 1 hasta el 100 mientras x<=100,
    //variación: incrementos de 1 en 1 y 2 en 2
    for (x=1; x<11; x++)
    {
        cout << x << ", ";
    }
    cout << "\n";
    system("pause");

    for(x=100; x!=65; x-=5) //x=x-5
    {
        z=sqrt(x);
        cout << "La raíz cuadrada de " << x << " es " << z << "\n";
    } 
    system("pause");
    x=10;
    for(y=10; y!=x; ++y){
        cout << y << "Dentro del ciclo (nunca entra)\n";
    }
    cout << y << " Fuera del ciclo\n";
    system("pause");

    for(x=0;y=0;x+y<10;++x){
        cout << "Dame el valor de y: ";
        cin >> y;
        cout << x << "+" << y << "=" << x+y << "El cilo continúa mientras la suma sea <10\n";
    }
    cout << x << "+" << y << " Fuera del cliclo\n";
    
    //el for puede no tener todas sus partes
    for(x=0; x!=123;){
        cout << "Dame el valor de x, 123 para terminar el ciclo: ";
        cin>>x;
    }
    system("pause");

    for(;;) /*Ciclo infinito*/{
        cout << "Nunca termina";
    }

    cout << "Hola mundo\n";
    for(x=0; x<1999900000) /*Ciclo retardador*/{
        cout << "Hola mundo despues de unos cuantos segundos";
    }
    return 0; 
}
