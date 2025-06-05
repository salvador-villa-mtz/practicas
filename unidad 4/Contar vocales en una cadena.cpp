#include <iostream>
#include <string.h>
using namespace std;

int main() {
    char texto[100];
    int vocales[5] = {0}, i;
    cout << "Escribe una palabra o frase: ";
    cin >> texto;

    for (i = 0; texto[i] != '\0'; i++) {
        switch (tolower(texto[i])) {
            case 'a': vocales[0]++; break;
            case 'e': vocales[1]++; break;
            case 'i': vocales[2]++; break;
            case 'o': vocales[3]++; break;
            case 'u': vocales[4]++; break;
        }
    }

    cout << "Frecuencia de vocales:\n";
    cout << "a: " << vocales[0] << "\ne: " << vocales[1];
    cout << "\ni: " << vocales[2] << "\no: " << vocales[3];
    cout << "\nu: " << vocales[4] << endl;

    return 0;
}