#include <iostream>
#include "Arbol.h"
int main(int args, const char* argv[])
{
    Arbol* arbol = new Arbol();
    arbol->insertNodo(new Nodo(new Event(3.1)));
    arbol->insertNodo(new Nodo(new Event(3.5)));
    arbol->insertNodo(new Nodo(new Event(3.2)));
    arbol->insertNodo(new Nodo(new Event(3.7)));
    arbol->insertNodo(new Nodo(new Event(2.21)));
    arbol->insertNodo(new Nodo(new Event(2.20)));
    arbol->findNodo(3.2);
    return 0;
}