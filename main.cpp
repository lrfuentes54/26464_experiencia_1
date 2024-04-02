#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>

using namespace std;

int main() {
	int resp;
    do {
        cout << "\n\n\tMENU PRINCIPAL:\n\n";
        cout << "\t\t1) Opción 1\n";
        cout << "\t\t2) Opción 2\n";
        cout << "\t\t3) Opción 3\n";
        cout << "\t\t0) Salir\n\n";
        cout << "\tMarque su opcion: ";
        cin >> resp;
        if (resp) {		
            switch (resp) {
                case 1: cout << "ser ucabista es arrecho\n";
                break;
                    
                case 2: cout << "Ha elegido la opción 2\n";
                break;
                
                case 3:cout << "Ha elegido la opción 3\n";
                break;

                default: cout << "Ha elegido una opción que no es valida\n";
            
            }
            cout << "Desea continuar? Si = 1 No = 0\n";
            cin >> resp;
        } 
    } while (resp);
    cout << endl;
}