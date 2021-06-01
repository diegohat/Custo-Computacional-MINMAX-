#include <stdio.h>
#include "minmax.h"

void MinMaxInicial(int *data, int *mi, int *ma)
{
    *mi = *ma = data[0]; //custo 1

    for(int i = 1; i < SIZE; i++) // custo total = 2(n-1)
    {
        if(*ma < data[i]) *ma = data[i]; //custo n-1
        if(*mi > data[i]) *mi = data[i]; //custo n-1
    }
}

void MinMaxTeste1(int *data, int *mi, int *ma)
{
    *mi = *ma = data[0]; //custo 1

    for(int i = 1; i < SIZE; i++) // custo total = 2(n-1)
    {
        if(*ma < data[i]) *ma = data[i]; //custo n-1
        else if(*mi > data[i]) *mi = data[i]; //custo n-1 mas so é checado se a primeira condição for falsa
    }
    
}

void Imprimir(int *data)
{
    for(int i = 0; i < SIZE; i++) printf("%i ", data[i]);
}