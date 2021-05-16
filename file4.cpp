//Constructeur declarée expliciment 

#include<iostream>

using namespace std;

//Constructeurs

class Rectangle
{
    private:
        double hauteur;
        double largeur;

    public:
        //Constucteur
        Rectangle(double h, double l)
        : hauteur(h),largeur(l)
        {}

        //Destructeur
        ~Rectangle()
        {
            delete largeur;
            delete hauteur;
        }

        double surface() const
        {
            return hauteur*largeur;
        }

};

/*
class RectangleColore
{
    RectangleColore(double h, double l, Couleur c)
    //liste des attributs
    :rectangle(h,l),Couleur(c)
    {}


    private:
        Rectangle rectangle;
        Couleur Couleur;




};
*/





int main()
{
    //Invocation du constructeur à 2 paramètres
    Rectangle r1(18,5.4);
    cout<<r1.surface();
    
    //Invocation du constructeur RectangleColore
    //RectangleColore r(r1,rouge);



    return 0;
}

/*
//Autre maniere de invoquer le constructeur
Rectangle(double h, double l)
    :hauteur(h) //initialisation
{
    //largeur a une valeur indéfinie jusqu'ici
    largeur = 2.0 * L + h;
    //la valeur de largeur est définie à partir d'ici
}
*/