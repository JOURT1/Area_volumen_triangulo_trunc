#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "funciones.h"

int main(int argc, char *argv[])
{
    float M[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Ingrese coordenadas punto del punto %d: \n", i + 1);
            scanf("%f", &M[i][j]);
        }
    }

    float radio = distancia(M);
    float alturamax = altrura(M);
    float alturamed = alturamedia(alturamax);
    float radiopequeño = radiope(alturamax,radio,alturamed);
    float a = area(radio, radiopequeño);
    float v = volumen(alturamed, radio, radiopequeño);
    float at = total(a);
    float vt = total(v);
    system("cls");
    
    printf("%f\n", a);
    printf("%f\n", v);
    printf("%f\n", at);
    printf("%f\n", vt);

    return 0;
}