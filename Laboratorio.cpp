#include "Laboratorio.h"
#include <fstream>
#include <algorithm>

Laboratorio::Laboratorio()
{
    
}

void Laboratorio::agregarFinal(const Computadora &C)
{
    Computadoras.push_back(C);
}

void Laboratorio::mostrar()
{
    cout << left;
    cout<< setw(15)<< "NombreEquipo";
    cout << setw(15)<< "SistemaOp";
    cout << setw(9)<< "DiscoD"; 
    cout << setw(9)<< "MemoriaR"; 
    cout << endl;
    for (size_t i = 0; i < Computadoras.size(); i++)
    {
        Computadora &C = Computadoras[i];
        cout << C;
        /*cout << "Nombre del Equipo: " << C.getNombre() << endl;
        cout << "Sistema Operativo: " << C.getSistema() << endl;
        cout << "Memoria en Disco Duro: " << C.getDisco() << endl;
        cout << "Memoria Ram: " << C.getRam() << endl;
        cout << endl;*/
    }
    
}

void Laboratorio::respaldar_tabla()
{
    
    ofstream archivo("Computadoras_tabla.txt");
    if(archivo.is_open()){
        archivo << left;
        archivo << setw(15)<< "NombreEquipo";
        archivo << setw(15)<< "SistemaOp";
        archivo << setw(9)<< "DiscoD"; 
        archivo << setw(9)<< "MemoriaR"; 
        archivo << endl;
        for (size_t i = 0; i < Computadoras.size(); i++)
        {
            Computadora &C = Computadoras[i];
            archivo << C;
        }
    }
    archivo.close();
    
}

void Laboratorio::respaldar()
{
    
    ofstream archivo("Computadoras.txt");
    if(archivo.is_open()){
        for (size_t i = 0; i < Computadoras.size(); i++)
        {
            Computadora &C = Computadoras[i];
            archivo << C.getNombre() << endl;
            archivo << C.getSistema() << endl;
            archivo << C.getDisco() << endl;
            archivo << C.getRam() << endl;
        }
    }
    archivo.close();
    
}

void Laboratorio::recuperar()
{
    ifstream archivo("Computadoras.txt");
    if (archivo.is_open())
    {
        string temp;
        float DiscoD;
        int MemoriaR;
        Computadora C;

        while (true)
        {
            getline(archivo, temp);
            if(archivo.eof())
            {
                break;
            }
            C.setNombre(temp);

            getline(archivo, temp);
            C.setSistema(temp);

            getline(archivo, temp);
            DiscoD = stof(temp); //string-to-float
            C.setDisco(DiscoD);

            getline(archivo, temp);
            MemoriaR = stoi(temp); //string-to-int
            C.setRam(MemoriaR);

            agregarFinal(C);
        }
        
    }
    archivo.close();
}

void Laboratorio::insertar(const Computadora &C, size_t pos)
{
    Computadoras.insert(Computadoras.begin()+pos, C);
}

size_t Laboratorio::size()
{
    return Computadoras.size();
}

void Laboratorio::inicializar(const Computadora &C, size_t n)
{
    Computadoras = vector<Computadora>(n, C);
}

void Laboratorio::eliminar(size_t pos)
{
    Computadoras.erase(Computadoras.begin()+pos);
}

void Laboratorio::ordenar()
{
    sort(Computadoras.begin(), Computadoras.end());
}

Computadora* Laboratorio::buscar(const Computadora &C)
{
    auto it = find(Computadoras.begin(), Computadoras.end(), C);
    //vector<Computadora>::iterador = auto

    if (it == Computadoras.end())
    {
        return nullptr;
    }
    else 
    {
        return &(*it);
    }
}

void Laboratorio::borrar_ultimo()
{
    if(Computadoras.empty())
    {
        cout << "lista vacia..."<<endl;
    }
    else{
        Computadoras.pop_back();   
    }
             
}
