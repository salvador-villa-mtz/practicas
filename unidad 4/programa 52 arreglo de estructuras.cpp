#include <iostream>//con getline y cin.ignore() corta la primera letra
#include<windows.h>
using namespace std;
int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    struct Estudiante {
        string nombre;
        int edad;
        int calificaciones[3];// Array para almacenar 3 calificaciones
    };
    int numEstu;// Número de estudiantes a almacenar
    cout<<"Ingresa la cantidad de estudiantes: ";
    cin>>numEstu;
    cin.ignore(); // Limpiar el buffer de entrada
    Estudiante estudiantes[numEstu]; //arreglo de estructuras Estudiante
    // Ingreso de datos para cada estudiante
    for (int i=0; i<numEstu; i++) {
        cout<<"\nIngresa los datos del estudiante #"<<i+1<<":\n";
        cout << "Nombre: ";
        getline(cin,estudiantes[i].nombre); // Leer nombre completo
        cout<<"Edad: ";
        cin>>estudiantes[i].edad;
        //Ingreso de calificaciones
        cout<<"Ingresa las calificaciones de 3 materias:\n";
        for(int j=0; j<3; j++){
            cout<<"Calificación #"<<j+1<<": ";
            cin>>estudiantes[i].calificaciones[j];
        }
        cin.ignore(); // Limpiar el buffer de entrada después de leer la edad
    }
    // Mostrar los datos ingresados
    cout<<"\nInformación de los estudiantes:\n";
    for (int i=0; i<numEstu; i++){
        cout<<"\nEstudiante #"<<i+1<<": ";
        cout<<"Nombre: "<<estudiantes[i].nombre<<" ";
        cout<<"Edad: "<<estudiantes[i].edad<<" ";
        cout<<"Calificaciones: ";
        for(int j=0;j<3;j++){
            cout<<estudiantes[i].calificaciones[j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}