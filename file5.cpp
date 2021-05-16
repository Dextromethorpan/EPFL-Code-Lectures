//Constructeur par Défaut

#include <iostream>

using namespace std;

class Rectangle
{
    private:
        double hauteur;
        double largeur;

    public:
        //Constructeur par défaut
        Rectangle() : hauteur(1), largeur(2)
        {}

        //2ème constructeur
        Rectangle(double c)
        : hauteur(c),largeur(2*c)
        {}

        double surface() const
        {
            return hauteur*largeur;
        }

};

int main()
{
    Rectangle r;
    cout<<r.surface()<<endl;

    Rectangle r1(2);
    cout<<r1.surface()<<endl;

    return 0;
}