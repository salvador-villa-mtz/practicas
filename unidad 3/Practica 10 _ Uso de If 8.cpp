//Programa de ejemplo, lee una fecha en numero y lo imprime en letra
#include <windows.h>
#include <iostream>
using namespace std;
int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int d, m, a;
    string mes;
    cout << "Dime el día: "; cin >> d;
    cout << "Dime el mes: "; cin >> m;
    cout << "Dime el año: "; cin >> a;
    if(m==1){
        mes = "Enero";
    }else 
        if(m==2){
            mes = "Febrero";
        }else 
            if(m==3){
                mes = "Marzo";
            }else 
                if(m==4){
                    mes = "Abril";
                }else 
                    if(m==5){
                        mes = "Mayo";
                    }else 
                        if(m==6){
                            mes = "Junio";
                        }else 
                            if(m==7){
                                mes = "Julio";
                            }else 
                                if(m==8){
                                    mes = "Agosto";
                                }else 
                                    if(m==9){
                                        mes = "Septiembre";
                                    }else 
                                        if(m==10){
                                            mes = "Octubre";
                                        }else 
                                            if(m==11){
                                                mes = "Noviembre";
                                            }else 
                                                if(m==12){
                                                    mes = "Diciembre";
                                                }
    cout << "La fecha es: " << d << " de " << mes << " de " << a;
    return 0;
}
//JUAN SALVADOR VILLA MARTINEZ
//24041074