#include <iostream>

using namespace std;

class Rectangle
{

    //Définition des méthodes
    public:
        double surface() const
        { return hauteur* largeur;}
        
        double getHauteur() const
        { return hauteur;}
        
        double getLargeur() const
        { return largeur;}

        void setHauteur(double h)
        { hauteur=h;}

        void setLargeur(double l)
        { largeur=l;}


    //déclaration des attributs
    private:
        double hauteur;
        double largeur;

};


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