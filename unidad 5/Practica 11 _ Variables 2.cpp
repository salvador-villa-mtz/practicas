/*Programa de ejemplo que usa una funcion la cual recibe los
parametros por referencia, y una que los recibe por valor. Ambas
obtienen el cuadrado del argumento. Cuando es por referencia 
se recibe la direccion de la variable y los cambios que se hacen
dentro de la funcion se mantienen fuera de ella; cuando es 
por valor, se recibe una copia de la varibale, las modificaciones
que se hagan a ese parametro dentro de la funcion no se veran
reflejados fuera de ella.*/
#include <iostream>
using namespace std;
void cuad1(int x); //copia el valor
void cuad2(int &x); //copia la direccion
int main(void){
    int x;
    cout << "Dame el valor para elevar al cuadrado ";
    cin >> x;
    cout << "x=" << x << " antes de enviarla a la funcion 1";
    system("pause");
    cuad1(x);
    cout << "\nx=" << x << " despues de enviarla a la funcion 1";
    system("pause");
    cuad2(x);
    cout << "\nx=" << x << " despues de enviarla a la funcion 2";
    return 0;
}

void cuad1(int x){
    x=x*x;
    cout << "\nx=" << x << " DENTRO de la funcion 1";
    system("pause");
}

void cuad2(int &x){
    x=x*x;
    cout << "\nx=" << x << " DENTRO de la funcion 2";
    system("pause");
}