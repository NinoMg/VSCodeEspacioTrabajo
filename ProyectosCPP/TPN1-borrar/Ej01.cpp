/*Este programa pide dos caracteres y mustra el valor ASCII de cada uno,
por ultimo compara los dos valor y muestra cual es el menor y cual el mayor.
Previo a controlar si el caracter ingresado es una letra*/

#include <iostream>

using namespace std;

int main() {
  
  char c1 = 'e';
  char c2;

  bool datoValido = false;

  do {

    cout << "Ingresar un carcter (letra)";
    cin >> c1;

    if(c1  < 'A' || (c1 > 'Z' && c1 < 'a') || c1 > 'z') {
            cout << "Error: el caracter ingresado es invalido." << endl;

    }else {
         datoValido = true;
            cout << "El valor ASCII del caracter " << c1 << " es " << int(c1) << "." << endl;
        } 


  }while(!datoValido);


  do {

    cout << "Ingresar un carcter (letra)";
    cin >> c2;

    if(c2  < 'A' || (c2 > 'Z' && c2 < 'a') || c2 > 'z') {
            cout << "Error: el caracter ingresado es invalido." << endl;

    }else {
         datoValido = true;
            cout << "El valor ASCII del caracter " << c2 << " es " << int(c2) << "." << endl;
        } 


  }while(!datoValido);

  if(c1 > c2){
    cout<< "por lo tanto ";
    cout<<c1<<" es mayor que " <<c2<< endl;
  }else{
    cout<< "por lo tanto ";
    cout<<c2;
    cout<<" es mayor que " <<c1<< endl;
  }
  

  return 0;

}
