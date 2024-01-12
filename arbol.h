#pragma once
#ifndef ARBOL_LIB_H
#define ARBOL_LIB_H
#include "Nodo.h"
class Arbol
{
private:
    /* data */
    Nodo* root{ NULL };
    //Nodo* findNodo(double timeStamp, Nodo* root);
    bool insertNodo(Nodo* nodo, Nodo* root);
    Nodo* findNodo(double timeStamp, Nodo* nodo);

public:
    Arbol(/* args */);
    Arbol(Nodo* nodo);
    ~Arbol();
    bool insertNodo(Nodo* nodo);
    Nodo* findNodo(double timeStamp);
    //Nodo* deleteNodo(double timeStamp);
};
#endif