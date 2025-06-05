#include <iostream>
//JUAN SALVADOR VILLA MARTINEZ
//24041074
using namespace std; //funcion que realiza la suma de dos numeros
int sumar(int a, int b);
int main(){
    int num1, num2;
    cout << "Ingresa el primer numero: ";
    cin >> num1;
    cout << "Ingresa el segundo numero: ";
    cin >> num2;
    int resultado = sumar(num1, num2);
    cout << "El resultado de la suma  es: " << resultado << "\n";
    cout << "El resultado es: " << sumar(num1,num2);
    cout << "num1 despues de la funcion: " << num1;
    cout << "\nnum2 despues de la funcion: " << num2;
    return 0;
}
int sumar(int num1, int num2){
    num1=0;
    num2=-1000;
    return num1+num2;
}