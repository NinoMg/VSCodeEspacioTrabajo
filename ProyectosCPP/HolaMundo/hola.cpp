#include <iostream>
#include <cstdlib>
#include <limits>
//#include <gtk/gtk.h>

//Comentario 01

using namespace std;

int main() {

    string h = "gdsgsdgfg";

    cout << "Hola \n " << endl;

    int n = 5;

    cout <<  sizeof(n) << "Escribir un entero " << endl;

    cin >> n;

    if(cin.fail()) {
        cout << "Error"; cin.clear(); cin.ignore(numeric_limits<streamsize>::max());
    }

    cout << n << " <= número entrado " << endl;
    cin.clear();
    streamsize tam = numeric_limits<streamsize>::max();
    cin.ignore(tam, '\n');
    //while (cin.get(c) && c != '\n');
    string input;
    cout << "Introduce un número entero: ";
    getline(cin, input);
    try {
        n = stoi(input);
        cout << "El número introducido es: " << n << endl;
    } catch (const exception& e) {
        cout << "Error: se ha introducido un valor no válido." << endl;
    }

    return 0;
}