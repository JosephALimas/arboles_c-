#pragma once
#ifndef ARBOL_LIB_CPP
#define ARBOL_LIB_CPP
#include "arbol.h"
Arbol::Arbol() : root{ NULL }
{
    // root = NULL
}
Arbol::Arbol(Nodo* nodo) : root{ nodo }
{
}
bool Arbol::insertNodo(Nodo* nodo, Nodo* rootTemp)
{

    if (nodo->dato->getTimeStamp() < rootTemp->dato->getTimeStamp())
    {
        if (!rootTemp->izq)
        {
            rootTemp->izq = nodo;
            std::cout << "insert en izq\n";
            return true;
        }
        return insertNodo(nodo, rootTemp->izq);
    }
    if (nodo->dato->getTimeStamp() > rootTemp->dato->getTimeStamp())
    {
        if (!rootTemp->der)
        {
            rootTemp->der = nodo;
            std::cout << "insert en der\n";
            return true;
        }
        return insertNodo(nodo, rootTemp->der);
    }
    return false;
}
bool Arbol::insertNodo(Nodo* nodo)
{
    if (!this->root)
    {
        this->root = nodo;
        std::cout << "insert en root\n";
        return true;
    }
    return insertNodo(nodo, this->root);
}
Arbol::~Arbol()
{
    if (!root)
    {
        if (!root->der && !root->izq)
        {
            std::cout << "Eliminando raiz\n";
            delete root;
        }
    }
}
Nodo* Arbol::findNodo(double timeStamp) {
    if (this->root->dato->getTimeStamp() == timeStamp) {
        std::cout << "SE ENCONTRO EN ROOT" << std::endl;
        return this->root->der;
    }
    if (this->root->der->dato->getTimeStamp() == timeStamp) {
        std::cout << "SE ENCONTRO EN DERECHO DE ROOT" << std::endl;
        return this->root->der;
    }
    if (this->root->izq->dato->getTimeStamp() == timeStamp) {
        std::cout << "SE ENCONTRO EN IZQUIERDO DE ROOT" << std::endl;
        return this->root->der;
    }
    if (this->root->der->dato->getTimeStamp() < timeStamp) {
        std::cout << "COTTROL MAYOR AAA" << std::endl;
        return findNodo(timeStamp, this->root->der);
    }
    if (this->root->der->dato->getTimeStamp() > timeStamp) {
        return findNodo(timeStamp, this->root->izq);
    }
}
Nodo* Arbol::findNodo(double timeStamp, Nodo* nodo) {
        //std::cout << "Control" << std::endl;
        std::cout << "El valor del nodo actual: " << nodo->dato->getTimeStamp() << std::endl;
        if (nodo->dato->getTimeStamp() == timeStamp) {
            std::cout << "SE ENCONTRO EN UNA RAMA" << std::endl;
            std::cout << "Control" << std::endl;

            return nodo;
        }
        else {
            if (nodo->dato->getTimeStamp() > timeStamp) {
                std::cout << "Control izq" << std::endl;

                return findNodo(timeStamp, nodo->izq);
            }
            if (nodo->dato->getTimeStamp() < timeStamp) {
                std::cout << "Control der" << std::endl;

                return findNodo(timeStamp, nodo->der);
            }
        }
    
}
#endif