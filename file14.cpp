//Classes Abstraites
//et Méthodes Virtuelles Pures

/*
Los métodos virtuales puros son declarados para luego 
ser utilizados de manera distinta, según la 
necesidad del momento.
Pero, como pueden ser usados de distinta manera, 
no es posible definirlos con el mayor de los
grados de detalle.
Las clases Abstractas se componen de métodos
virtuales puros.
*/

#include<iostream>

using namespace std;

class Personnage
{
    public:
        //Méthodes Virtuelles Pures (=0)
        virtual void afficher() const = 0;

};

//Autre exemple

class FigureFermee
{
    public:
        virtual double surface() const =0;
        virtual double perimetre() const=0;

    //On peut utiliser une méthode virtuelle pure:
    double volume(double hauteur) const
    {
        return hauteur*surface();
    }
};


/*Une class abstrait ne peut pas être instanciée*/

class Cercle: public FigureFermee
{
    public:
        
        double surface()const override
        {
            return M_PI*rayon*rayon;
        }

    protected:
        double rayon;
};

