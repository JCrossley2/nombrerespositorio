#ifndef COLA_HPP
#define COLA_HPP

#include "NodoCola.hpp"

class Cola
{
public:
    Cola();
    ~Cola();
    void insertar(int v);
    int eliminar();
    void mostrar();
    int verPrimero();

private:
    pnodoCola primero;
    pnodoCola ultimo;
    int longitud;
};

#endif