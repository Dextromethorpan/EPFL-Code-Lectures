//Arreglo de Punteros
//El arreglo de punteros es una matriz
//de punteros.
//Nuevamente, no preasignamos el valor
//de memoria de string libros.

#include<iostream>
#include<stdio.h>
#include<string>

using namespace std;

int main()
{
    int columns=2;//numero de columnas fijo

    string ** libros; //matriz de punteros

    int size;

    cout<<"Cuantos libros desea ingresar? ";

    string entrada;

    getline(cin, entrada);
    size=stoi(entrada);

    //como libros es un arreglo de punteros
    //necesitamos agregar *
    libros=new string*[size];

    cout<<"Ingrese la siguiente info "
          "de los Libros: \n";

    string titulo, autor;

    for(int i=0;i<size;i++)
    {
        libros[i]=new string[columns];
        cout<<"\n****** Libro "<<i+1<<"***: \n";

        cout<<"Titulo: ";
        getline(cin,titulo);

        cout<<"Autor: ";
        getline(cin,autor);

        libros[i][0]=titulo;
        libros[i][1]=autor;

    }

    for(int i=0; i<size; i++)
    {
        //esto limpia la memoria de los 
        //punteros fila
        delete [] libros[i];
    }

    //esto limpia la memoria de el 
    //puntero, que es un arreglo de 
    //punteros
    delete [] libros;


    return 0;

}