#include <iostream>
#include "funciones.h"

using namespace std;


double* RK4(double y0, v0, t, dt)
{
    // Definicion de variables globales
    //Slope hace referencia a la siguiente posicion en Y
    double y, t;
    double k1, k2, k3 k4, slope;
    
    
    //Primer paso
    y=posicion(y0, t, v0);
    
    
    
    k1 = velocidad(y,t)*dt;
    k2 = velocidad(y + 0.5*k1, t+(0.5*dt))*dt; 
    k3 = velocidad(y + 0.5*k2, t+(0.5*dt))*dt; 
    k4 = velocidad(y + k3, t+dt)*dt; 
    
    
    //Actualizacion de valores de Y y t
    slope= y + (0.166)*(k1+ 2.0*k2 + 2.0*k3 + k4);
    t=t+dt;
    
}


int main()
{
    
    //Condiciones iniciales del problema
    double y0=8.5, v0=20;
    
    
    return 0;
    
}
    