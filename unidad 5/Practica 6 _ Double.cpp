#include <iostream>
using namespace std;
//JUAN SALVADOR VILLA MARTINEZ
//24041074
double ctof(double centi); //convierte de °C a °Farenheit
double ftoc(double fahr); //convierte de Farenheit a °C
int main(){
    double temperatura;
    int opcion;
    cout << "Ingrese una temepratura: ";
    cin >> temperatura;
    cout << "Seleccione la opción deseada: \n";
    cout << "1. Convertir de °C a °F\n";
    cout << "2. Convertir de °F a °C\n";
    cin >>opcion;
    switch(opcion){
        case 1: 
            cout << temperatura << " grados Centigrados son " << ctof(temperatura) << " grados Farenheit.\n";
            break;
        case 2:
            cout << temperatura << " grados Farenheit son " << ftoc(temperatura) << " grados Centigrados.\n";
            break;
        default:
            cout << "Opción no válida.\n";
            break;
    }
    return 0;
}