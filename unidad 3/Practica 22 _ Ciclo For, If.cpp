#include <iostream>
#include <windows.h>
using namespace std;
int main(){
    int x=1;
    string clave;
    for(x=1; x<4; x++){
        printf("Dame tu password sin espacios en blanco (intento #%d): ", x);
        cin>>clave;
        if(clave=="soloyolose"){
            break;
        }
    }
    if(x==4){
        puts("\aUsuraio no autorizado");
    }else{
        printf("Bienvenido la intento #%d", x);
    }
    return 0;
}
//JUAN SALVADOR VILLA MARTINEZ
//24041074