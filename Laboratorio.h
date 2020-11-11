#ifndef LABORATORIO_H
#define LABORATORIO_H

#include "Computadora.h"
#include <vector>
class Laboratorio
{
    vector<Computadora> Computadoras;
   
public:
    Laboratorio();
    void agregarFinal(const Computadora &C);
    void mostrar();
    void respaldar_tabla();
    void respaldar();
    void recuperar();

    void insertar(const Computadora &C, size_t pos);
    size_t size();
    void inicializar(const Computadora &C, size_t n);
    void eliminar(size_t pos);
    void ordenar();
    Computadora* buscar(const Computadora &C);
    void borrar_ultimo();

    friend Laboratorio& operator<<(Laboratorio &lb, const Computadora &C)
    {
        lb.agregarFinal(C);

        return lb;
    }
};

#endif 