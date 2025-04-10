#include <iostream>
#include <windows.h>
using namespace std;
int main(){
    int x, c=0;
    float sueldo, total;
    char opcion, nombre[10];
    while (c!=0)//la condición nunca se cumple ¡Cuidado!
    {
        cout << "Esto nunca se imprime";
        //c=0;
        /*while se puede usar en situaciones en las que se sabe de antemano el numero de vueltas que se habra de ejecutar,
        y debe constar de incializacion, condicion y modificacion*/
        x=1;//incializacion
        while(x<11)
        {
            cout << x << "\n"; //Imprime una numeracion 1.10
            x++; //variacion
        }
        system("pause");
        //o bien cuando no se sabe cuántos vueltas debe da
        opcion='s';//inicializacion
        while(opcion=='s' or opcion=='S')
        {
            system("cls");
            cout << "Dame tu nombre "; fflush(stdin); gets(nombre);
            cout << "Dame tu sueldo "; cin>>sueldo;
            total+=sueldo; //es lo mismo que total=total++sueldo;
            printf("Deseas capturar otro empleado <<s/n>>? ");
            cin>>opcion;//variacion
        }
        printf("Total de salarios= &%5.2f/n", total);
        printf("Despues de la pausa el programa se cicla\n");
        system("pause");
        x=0;
        //cuidado con poner ; despues de un while
        while(x<10);
        {
            cout << x << "\n"; //Imprime una numeracion 0.9
            x++; //variacion
        }
        return 0;
    }
}