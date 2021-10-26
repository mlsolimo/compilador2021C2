#ifndef ARBOL_H_INCLUDED
#define ARBOL_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define SIN_MEMORIA 0
#define EXITO       1
#define DUPLICADO   2 

typedef struct s_NodoArbol
{
    struct s_NodoArbol *izq;
    struct s_NodoArbol *der;
    char info[50];
}t_NodoArbol;

typedef t_NodoArbol* tArbol;

/// Prototipos ///

t_NodoArbol* crear_hoja( char* lexema);
t_NodoArbol* crear_nodo(char* lexema, t_NodoArbol* hijoIzq, t_NodoArbol* hijoDer);
void guardarEnArchivoInorden(tArbol *pa, FILE *pIntermedia);
void postOrden(tArbol *pa);

t_NodoArbol* crear_hoja( char* lexema)
{
    t_NodoArbol* nue = (t_NodoArbol*) malloc (sizeof(t_NodoArbol));
    if(!nue)
    {
        printf("No se pudo reservar memoria para el nodo.\n");
        return NULL;
    }
    //Ponemos izq y der en NULL, y almacenamos el lexema dentro del nodo
    nue->izq = NULL;
    nue->der = NULL;
    strcpy(nue->info, lexema);
    return nue;
}

t_NodoArbol* crear_nodo(char* lexema, t_NodoArbol* hijoIzq, t_NodoArbol* hijoDer)
{
    t_NodoArbol* padre = (t_NodoArbol*) malloc (sizeof(t_NodoArbol));
    
    if(!padre)
    {
        printf("No se pudo reservar memoria para el nodo.\n");
        return NULL;
    }

    padre->izq = hijoIzq;
    padre->der = hijoDer;
    strcpy(padre->info, lexema);

    return padre;
}

void guardarEnArchivoInorden(tArbol *parbol, FILE *pf)
{
    if (!*parbol)
        return;
    guardarEnArchivoInorden(&(*parbol)->izq, pf);
    fwrite(&(*parbol)->info, sizeof(char[50]), 1, pf);
    guardarEnArchivoInorden(&(*parbol)->der, pf);
}

void postOrden(tArbol *pa)
{
    if(!(*pa))
        return;
    postOrden(&(*pa)->izq);
    postOrden(&(*pa)->der);
    printf("%s  ", (*pa)->info);
}



#endif // ARBOL_H_INCLUDED