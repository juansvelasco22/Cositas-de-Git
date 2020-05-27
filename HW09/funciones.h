#include <iostream>
using namespace std;


/*

Vamos a simular el movimiento rectilineo uniformemente acelerado de una piedra con altura inicial = 8.5 m y velocidad inicial 20 m/s hacia arriba. La evolucion temporal va a estar dada por una funcion dentro de "funciones.h". Utilice "cout" para imprimir en pantalla tiempo y altura mientras que la altura de la piedra sea positiva.

La evolucion temporal se implementa como una funcion RungeKutta4 que es invocada desde main.cpp

Valores iniciales
Velocidad = 20m/s
Altura = 8.5m

Funciones
v=v0 + a*t
x=x0 + v0*t + (1/2)a*(t)^2

*/

int RK4(double x0, double y0)
{
    int a=9.8;
    float k1, k2, k3 k4, slope;
    
    
    float f()
    {
        Vn=v0+a*t;
        Xn=x0+v0*t+(1/2)*a*pow(t,2);
    }
    
    
    k1 = f(x0,y0);
    k2 = h*f(x0 + 0.5*h, y + 0.5*k1); 
    k3 = h*f(x0 + 0.5*h, y + 0.5*k2); 
    k4 = h*f(x0 + h, y + k3); 
    
    
}