#include <iostream>
using namespace std; //Funcion que verifica si un numero es par o impar
int main(){
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;
    parImpar(numero);
    //vuelvo a llamar la funcion y no hay necesidad de volver a escribir el codigo
    cout << "Ingrese otro nunmero: ";
    cin >> numero;
    parImpar(numero);
    return 0;
}
void parImpar(int numero){
    if(numero%2==0){
        cout << "El numero es par.\n";
    }else{
        cout << "El numero es impar\n";
    }
}