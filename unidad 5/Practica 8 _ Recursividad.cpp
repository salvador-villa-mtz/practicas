#include <stdio.h>
#include <iostream>
using namespace std;
//JUAN SALVADOR VILLA MARTINEZ
//24041074
int factoirial(int n);
int main(){
    int num;
    cout << "Dime un numero para calcular su factorial: ";
    cin >> num;
    cout << "El facotial de " << num << " es: ";
    num = factoirial(num);
    cout << num;
    return 0;
}

int factorial(int n){
    if (n==0){
        return 1;
    }else{
        return n*factorial(n-1); //recursividad
    }
}