#include <iostream>
#include<windows.h>
using namespace std;
int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    struct Estudiante {
        string nombre;
        int edad;
        int promedio;
        int calificaciones[5];//arreglo para almacenar las calificaciones de 5 materias
    };
    Estudiante estudiante1;//declaración de una variable de tipo Estudiante
    int suma=0;
    //ingreso de datos
    cout<<"Ingrese el nombre del estudiante: ";
    getline(cin, estudiante1.nombre);
    //cin>>estudiante1.nombre;
    cout<<"Ingrese la edad del estudiante: ";
    cin>>estudiante1.edad;
    //ingreso de calificaciones
    cout<<"Ingrese las calificaciones de 5 materias:\n";
    for (int i=0; i<5; i++) {
        cout<<"Calificación de la unidad "<<i+1<<": ";
        cin>>estudiante1.calificaciones[i];
        suma=suma+estudiante1.calificaciones[i];
    }
    estudiante1.promedio=suma/5;//cálculo del promedio
    //mostrando los datos ingresados
    cout<<"\nInformación del estudiante:\n";
    cout<<"Nombre: "<<estudiante1.nombre<<"\n";
    cout<<"Edad: "<<estudiante1.edad<<"\n";
    cout<<"Calificaciones: ";
    for (int i=0;i<5;i++) {
        cout<<estudiante1.calificaciones[i]<<" ";
    }
    cout<<"\nPromedio: "<<estudiante1.promedio;
    return 0;
}
