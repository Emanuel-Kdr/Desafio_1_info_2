#include <iostream>

using namespace std;

int main() // crear una funcion entera
{   
    /*
    cout << "sus" << endl; //escribir en la consola y el endl es un salto de line tambienm

    int A; //Declaracin
    A = 2;//Asignacion


    int A = 2; //Esta manera es mas eficiente

    string abecedario = "tu mamam ";

    cout << "sabes que si" << abecedario << endl; //llamar a consola
    return 0;
*/

    char c;
    cout << "Ingresa un caracter: ";
    cin >> c;

    // Verificar si es letra
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) { // verificamos si es una letra ya sea mayuscula o minuscula
        // Convertir a minúscula si es mayúscula
        char lower = c; //lower va a agarrar el valor de c para volverla minuscula
        if (c >= 'A' && c <= 'Z') {
            lower = c + 32;  // volvemos nuestra variable una minuscala para verificar si es una vocal
        }

        // Verificar si es vocal
        if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') { // pasamos nuetra variable por un if con varios ||(O) para verificar si es una de esas Vocales
            cout << c << "  Es una vocal" << endl;
        } else {
            cout << c << "  Es una consonante" << endl;// de lo contrario seria una consonante
        }
    } else {
        cout << c << "  No es una letra" << endl;
    }

    return 0;

}



