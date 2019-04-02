#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"

void recibirVector(int vectorRecibido[], int cantidadElementos);
void mostrarVector (int vectorRecibido[], int cantidadElementos);
int buscarMaximo (int vectorRecibido[], int cantidadElementos);
int buscarUnValor (int vectorRecibido[], int cantidadElementos, int valorABuscar);

void recibirVector(int vectorRecibido [], int cantidadElementos)
{
    int i;

    for(i=0; i<cantidadElementos; i++)
    {
        printf("Ingrese un numero:");
        scanf("%d", &vectorRecibido[i]);
    }
}

void mostrarVector (int vectorAMostrar[], int cantidadElementos)
{
    int i;

    for (i=0; i<cantidadElementos; i++)
    {
        printf("%d", vectorAMostrar[i]);
    }
}

int buscarMaximo (int vectorRecibido[], int cantidadElementos)
{
    int i;
    int bandera = 0;
    int maximo;

    for (i=0; i<cantidadElementos; i++)
    {
        if(bandera == 0 || vectorRecibido[i]>maximo)
        {
            maximo = vectorRecibido[i];
            bandera = 1;
        }
    }
    return maximo;
}

int buscarUnValor (int vectorRecibido[], int cantidadElementos, int valor)
{
    int i;
    int indice = -1;

    for(i=0; i<cantidadElementos; i++)
    {
        if(vectorRecibido[i]==valor)
        {
            indice = i;
            break;
        }
    }
    return indice;
}




