#include <iostream>
using namespace std;


/*

Valores iniciales
Velocidad = 20m/s
Altura = 8.5m

Funciones
t=(2*v0)/a
v=v0 + a*t
x=x0 + v0*t + (1/2)a*(t)^2
a=-9.8m/s^2

*/

double a=9.8;

double tiempo(double v0)
{
    
    tfuturo=(2*v0)/a;
    return tfuturo;
}

double posicion(double y0, t, v0)
{
    yfuturo=y0 + v0*t - (1/2)*a*pow(t,2);
    return yfuturo;
}

double velocidad(double v0,t)
{
    vfuturo=v0-(a*t);
    return vfuturo;
}

