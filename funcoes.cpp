#include <math.h>
#include "funcoes.h"

//**********************************************************************
int somaInt(int a, int b){
    return a+b;
}

bool cmpf(float A, float B)
{
    return (fabs(A - B) < 0.0001f);
}
