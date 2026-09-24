#include <iostream>
#include <cctype> 
using namespace std;

int main() {
    int codigo;

    cout << "Ingrese el codigo numérico del caracter (ASCII): ";
    cin >> codigo;

    char c = static_cast<char>(codigo);

    if (iscntrl(c) || codigo < 0 || codigo > 255) {
        cout << "Corresponde a un caracter NO IMPRIMIBLE o de control." << endl;
    } else if (isalpha(c)) {
        cout << "Corresponde a un caracter ALFABETICO ('" << c << "')." << endl;
    } else if (isdigit(c)) {
        cout << "Corresponde a un DIGITO ('" << c << "')." << endl;
    } else if (ispunct(c)) {
        cout << "Corresponde a un caracter de PUNTUACION o signo ('" << c << "')." << endl;
    } else {
        cout << "Corresponde a un caracter ESPECIAL o espacio ('" << c << "')." << endl;
    }

    return 0;
}