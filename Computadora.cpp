#include "Computadora.h"

Computadora::Computadora()
{

}
Computadora::Computadora(const string &NombreEquipo, const string &SistemaOp, float DiscoD, int MemoriaR)
{
    this->NombreEquipo = NombreEquipo;
    this->SistemaOp = SistemaOp;
    this->DiscoD = DiscoD;
    this->MemoriaR = MemoriaR;
    
}

void Computadora::setNombre(const string &v)
{
    NombreEquipo = v;
}

string Computadora::getNombre()
{
    return NombreEquipo;
}

void Computadora::setSistema(const string &v)
{
    SistemaOp = v;
}

string Computadora::getSistema()
{
    return SistemaOp;
}

void Computadora::setDisco(float v)
{
    DiscoD = v;
}

float Computadora::getDisco()
{
    return DiscoD;
}

void Computadora::setRam(int v)
{
    MemoriaR = v;
}

int Computadora::getRam()
{
    return MemoriaR;
}