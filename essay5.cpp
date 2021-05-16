//Parámetros por Referencia

#include <iostream>
#include<stdio.h>

using namespace std;

int funcion(int valor)
{
    valor=valor+10;//Suma 10 a valor
    return valor;
}

int funcionPunteros(int*valor)
{
    *valor=*valor+10;
    //Suma 10 en la posición de memoria
    //de valor
    return *valor;
}

int main()
{
    int numero=10;
    
    cout<<"Antes de funcion "
        <<numero
        <<"\n";

    funcion(numero);

    cout<<"Despues de funcion "
        <<numero
        <<"\n";

    cout<<"Antes de funcionPunteros "
        <<numero
        <<"\n";

    funcionPunteros(&numero);

    cout<<"Despues de funcionPunteros "
        <<numero
        <<"\n";

        return 0;

}
