#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "funciones.h"

float volumen(float alturamed, float radio, float radiopequeño)
{
    float v= ((alturamed*3.14)/3)*(pow(radiopequeño, 2)+pow(radio, 2)+(radio*radiopequeño));
    return v;
}

float area(float radio, float radiopequeño)
{
    float A= 3.14*(pow(radio, 2)+pow(radiopequeño, 2)+3.84*(radio+radiopequeño));
    return A;
}

float alturamedia(float alturamax)
{
    float med = (alturamax) / 2;
    return med;
}

float altrura(float M[3][3])
{
    float d1 = sqrt(pow((M[0][0] - M[2][0]), 2) + pow((M[0][1] - M[2][1]), 2) + pow((M[0][2] - M[2][2]), 2));
    return d1;
}

float distancia(float M[3][3])
{
    float d1 = sqrt(pow((M[0][0] - M[1][0]), 2) + pow((M[0][1] - M[1][1]), 2) + pow((M[0][2] - M[1][2]), 2));
    return d1;
}
float total(float a)
{
    float at= 2*a;
    return at;
}


float radiope (float alturamax,float radio,float alturamed)
{
    float radio= (alturamed * radio)/ alturamax;
    return radio;

}