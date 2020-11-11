#ifndef COMPUTADORA_H
#define COMPUTADORA_H

#include <iostream>
#include <iomanip>
using namespace std;

class Computadora{
private:
    string NombreEquipo;
    string SistemaOp;
    float DiscoD;
    int MemoriaR;
public:
    Computadora();
    Computadora(const string &NombreEquipo, const string &SistemaOp, float DiscoD, int MemoriaR);
    void setNombre(const string &v);
    string getNombre();
    void setSistema(const string &v);
    string getSistema();
    void setDisco(float v);
    float getDisco();
    void setRam(int v);
    int getRam();

    friend ostream& operator<<(ostream &out, const Computadora &C)
    {
        out << left ;
        out << setw(15)<< C.NombreEquipo;
        out << setw(15)<< C.SistemaOp;
        out << setw(9)<< C.DiscoD; 
        out << setw(9)<< C.MemoriaR; 
        out << endl;

        return out;
    }

    friend istream& operator>>(istream &in, Computadora &C)
    {
        string temp;
        float DiscoD;
        int MemoriaR;

        cout << "Nombre: ";
        getline(cin, C.NombreEquipo);

        cout << "Sistema Operativo: ";
        getline(cin, C.SistemaOp);

        cout << "Disco Duro: ";
        cin >> C.DiscoD;

        cout << "Memoria Ram: ";
        cin >> C.MemoriaR;
        
        return in;
    }



    bool operator==(const Computadora& p)
    {
        return NombreEquipo == p.NombreEquipo;
    }
    bool operator==(const Computadora& p) const
    {
        return NombreEquipo == p.NombreEquipo;
    }
};


#endif