#include <iostream>
#include <time.h> //incluir esta biblioteca para el uso de time()
using namespace std;
int cuantos(void);
void captura(int arreglo[], int n);
void ordena(int arreglo[], int n);
void imprime(int arreglo[], int n);
int main(){
    int num, arreglo[100];
    srand(time(0));
    num=cuantos();
    cout << "El arreglo sera de " << num << " elementos\n";
    captura(arreglo, num);
    cout << "El arreglo original es: \n";
    imprime(arreglo, num);
    cout << "El arreglo ordenado es: \n";
    ordena(arreglo, num);
    imprime(arreglo, num);
    return 0;
}

int cunatos(void){
    int n=0;
    do{
        cout << "Dime cuantos elementos quieres ordenar? <2-10>";
        cin >> n;
    }while(n>10 or n<2);
    return n;
}

void captura(int arreglo[], int n){
    int i;
    for(i=0; i<n; i++){ //ciclo para llenar el vector
        arreglo[i]=rand()%10; //Genera numero aleatorio entre 0 y 9
    }
}

void imprime(int arreglo[], int n){
    int i;
    for(i=0; i<n; i++){
        cout << "Arreglo[" << i << "]=" << arreglo[i] << "\n";
    }
}

void ordena(int arreglo[], int n){
    int i, j, tempo;
    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(arreglo[i]>arreglo[j]){
                tempo=arreglo[j];
                arreglo[j]=arreglo[i];
                arreglo[i]=tempo;
            }
        }
    }
}