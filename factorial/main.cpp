#include <iostream>
using namespace std;

int factorial();

int main()
{
        
        
    int numero;
    cout << "Digite un numero entero por favor ";
    cin >> numero;
    
    
    int factorial=1;
   
    if(numero==1)
    {
        factorial=0;
    }
    else
    {
        for (int i=1;i<=numero;i++)
        {
            factorial=factorial*i;
        }
        
    }
    cout << "El factorial del numero " << numero << " es: " << factorial << endl;
    return factorial;

}
