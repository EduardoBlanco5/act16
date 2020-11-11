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
        cout << "5.- Insertar " << endl;
        cout << "6.- Inicializar " << endl;
        cout << "7.- Eliminar " << endl;
        cout << "8.- Ordenar " << endl;
        cout << "9.- Buscar " << endl;
        cout << "10.- Borrar ultimo " << endl;
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
        else if (op == "5")
        {
            Computadora C;

            cin >> C;
            size_t pos;
            cout << "posicion: ";
            cin >> pos; cin.ignore();

            if (pos >= Lb.size())
            {
                cout << "posicion no valida" << endl;
            
            }
            else
            {
                Lb.insertar(C, pos);
            }
            
            
        }
        else if (op == "6")
        {
            Computadora C;
            cin >> C;

            size_t n;
            cout << "n: ";
            cin >> n; cin.ignore();

            Lb.inicializar(C, n);
        }
        else if (op == "7")
        {
            size_t pos;
            cout << "posicion: ";
            cin >> pos; cin.ignore();

            if (pos >= Lb.size())
            {
                cout << "posicion no valida" << endl;
            
            }
            else
            {
                Lb.eliminar(pos);
            }
        }
        else if (op == "8" )
        {
            Lb.ordenar();
        }
        else if (op == "9")
        {
            Computadora C;
            cin >> C; cin.ignore();

            Computadora *ptr = Lb.buscar(C);

            if (ptr == nullptr)
            {
                cout << "No encontrado" << endl;
            }
            else
            {
                cout << *ptr << endl;
            }
            
        }
        else if (op == "10")
        {
            Lb.borrar_ultimo();
        }
        
        else if (op == "0")
        {
            break;
        }  
        
    };

    system("pause");
}