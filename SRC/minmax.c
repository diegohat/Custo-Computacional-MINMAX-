#include <stdio.h>
#include "minmax.h"

void MinMaxInicial(int *data, int *mi, int *ma)
{
    *mi = *ma = data[0]; //custo 1

    for(int i = 0; i < SIZE; i++) // logo custo 2(n-1)
    {
        if(*ma < data[i]) *ma = data[i]; //custo n-1
        if(*mi > data[i]) *mi = data[i]; //custo n-1
    }
}

void MinMaxTeste1()
{

}

void MinMaxTeste2()
{

}

void Imprimir(int *data)
{
    for(int i = 0; i < SIZE; i++) printf("%i ", data[i]);
}