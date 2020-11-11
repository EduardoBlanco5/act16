#include <iostream>
#include "Laboratorio.h"
using namespace std;

int main()
{
    Laboratorio Lb;
    string op;

    while (true)
    {
        cout << "1.- Agregar Computadora " << endl;
        cout << "2.- Mostrar " << endl;
        cout << "3.- Respaldar " << endl;
        cout << "4.- Recuperar " << endl;
        cout << "0.- salir " << endl;
        getline(cin, op);

        if (op == "1")
        {
            Computadora C;

            cin >> C;
            Lb.agregarFinal(C); 
            cin.ignore();
        }
        else if (op == "2")
        {
            Lb.mostrar();
        }
        else if (op == "3")
        {
            Lb.respaldar();
        }
        else if (op == "4")
        {
            Lb.recuperar();
        }
        else if (op == "0")
        {
            break;
        }
        
        
    }
    
    system("pause");
}