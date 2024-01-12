#pragma once
#ifndef NODO_LIB_CPP
#define NODO_LIB_CPP
#include "Nodo.h"
Nodo::Nodo(/* args */)
{
    this->izq = NULL;
    this->der = NULL;
    this->dato = NULL;
}
Nodo::Nodo(Event* dato)
{
    this->dato = dato;
}
Nodo::~Nodo()
{
}
bool Nodo::setDato(Event* dato)
{
    this->dato = dato;
    return true;
}
bool Nodo::setIzq(Nodo* nodo)
{
    this->izq = nodo;
    return true;
}
bool Nodo::setDer(Nodo* nodo)
{
    this->der = nodo;
    return true;
}
Event* Nodo::getDatos()
{
    return this->dato;
}
Nodo* Nodo::getNodoIzq()
{
    return this->izq;
}
Nodo* Nodo::getNodoDer()
{
    return this->der;
}
#endif