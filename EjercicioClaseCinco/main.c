//VECTORES.
#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"
#define T 5

int main()
{

    int numeros [T];
    int maximo;
    int valor;
    int indiceDelValor;

    recibirVector(numeros, T);
    mostrarVector(numeros, T);

    maximo = buscarMaximo(numeros, T);
    printf("\nEl maximo es %d", maximo);

    printf("\nIngrese un valor para buscar en el vector: ");
    scanf("%d",&valor);

    indiceDelValor = buscarUnValor(numeros,T,valor);
    printf("\nEl indice del valor ingresado para buscar es %d",indiceDelValor);


    return 0;
}
