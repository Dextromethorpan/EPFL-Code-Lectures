//Arreglos Dinámicos
//para ello se usan punteros
//Los arreglos dinámicos son aquellos que
//no tienen preestablecido un tamaño
//de entrada.



#include<iostream>
#include<stdio.h>
#include<string>

using namespace std;

int main()
{
    string* titulos=NULL;

    string* autores=NULL;

    int size;

    cout<<"Cuantos libros desea ingresar? ";

    string entrada;

    //ingreso de datos
    getline(cin, entrada);
    
    //transforma string en int 
    size=stoi(entrada);

    //Declaramos los arreglos de tamaño
    //size
    titulos=new string[size];
    autores=new string[size];

    cout<<"Ingrese la siguiente info de "
          "los libros: \n";
    
    for(int i=0;i<size;i++)
    {
        cout<<"\n****** Libro "<<i+1<<"***: \n";

        cout<<"Titulo: ";
        getline(cin,titulos[i]);

        cout<<"Autor: ";
        getline(cin,autores[i]);
    }

    //Liberamos la memoria de ambos punteros
    delete [] titulos;
    delete [] autores;
    titulos=NULL;
    autores=NULL;
    
    return 0;
}