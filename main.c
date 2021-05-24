#include <stdio.h>
#include "SRC/minmax.h"

int main(void) 
{
    int data[SIZE] = {22, 9, 33, 28, 13, 17, 1, 44, 90, 11};
    int mi, ma;

    Imprimir(data);

    MinMaxInicial(data, &mi, &ma);

    printf("\nMAX: %i\nMIN: %i\n", mi, ma); // custo 1

    return 0;
}