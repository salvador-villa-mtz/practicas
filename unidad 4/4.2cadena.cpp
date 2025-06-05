#include<windows.h>
#include<iostream>
#include<string>
using namespace std;
int main ( )
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	int x;
	string micadena ="hola mundo";
	cout<<"la cadena original es:"<<micadena<<"\n";
	char letra1=micadena[0];//acceder al primer caracter de la cadena
	cout << "la primera letra es: "<< letra1 << "\n";
	micadena[1]='e';//modificar el segundo caracter de la cadena
	cout<<"la cadena modificada es: "<< micadena<< "\n";
	for (x=0;x<micadena.length();x++)
	   cout<<micadena[x]<<"\n" ;
	
return 0;	
}



