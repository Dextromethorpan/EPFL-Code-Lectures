//Class Rectangle

#include <iostream>

using namespace std;

class Rectangle
{

    //Définition des méthodes
    public:
        //prototypes des méthodes
        double surface() const;
        
        //acceseurs
        double getHauteur() const;
        double getLargeur() const;
        
        //manipulateurs
        void setHauteur(double);
        void setLargeur(double);
        


    //déclaration des attributs
    private:
        double hauteur;
        double largeur;

};


double Rectangle::surface() const
{
    return hauteur*largeur;
}

double Rectangle::getHauteur() const
{
    return hauteur;
}

double Rectangle::getLargeur() const
{
    return largeur;
}

void Rectangle::setHauteur(double h)
{
    hauteur=h;
}

void Rectangle::setLargeur(double l)
{
    largeur=l;
}




int main()
{
    Rectangle rect;
    double lu;

    cout<<"Quelle hauteur? ";
    cin>>lu;
    rect.setHauteur(lu);

    cout<<"Quelle largeur? ";
    cin>>lu;
    rect.setLargeur(lu);

    cout<<"surface =  "<<rect.surface()
        <<endl;


    return 0;
}