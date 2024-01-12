#pragma once
#ifndef NODO_LIB_H
#define NODO_LIB_H
#include <cstdio>
#include "event.h"
class Nodo
{
private:
    /* data */
    Event* dato{ NULL };
    Nodo* izq{ NULL };
    Nodo* der{ NULL };
public:
    Nodo(/* args */);
    Nodo(Event* dato);
    ~Nodo();
    friend class Arbol;
    bool setDato(Event* dato);
    bool setIzq(Nodo* nodo);
    bool setDer(Nodo* nodo);
    Event* getDatos();
    Nodo* getNodoIzq();
    Nodo* getNodoDer();
};
#endif