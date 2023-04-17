#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {

      cout << "El número de argumentos es: " << argc << endl;
      for(int i = 0; i < argc; i++) {
        cout << "Argumento " << i << ": " << argv[i] << endl;
      }
  
    cout << "Hola" << endl;

    return 0;
}
