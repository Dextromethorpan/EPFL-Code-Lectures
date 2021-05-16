//Constructeur de copie

#include <iostream>

using namespace std;

class Rectangle
{
    private:
        double largeur;
        double hauteur;

    public:
        Rectangle ()
        :hauteur(1), largeur(2)
        {}

        Rectangle(Rectangle const& autre)
        :hauteur(autre.hauteur), largeur(autre.largeur)
        {}

        double surface() const
        {
            return hauteur*largeur;
        }
};

int main()
{
    Rectangle r;

    Rectangle r1(r);



    return 0;
}


//Suppression du constructeur de copie
/*
class PasCopiable
{
    PasCopiable(Pascopiable const &)=delete;
}
*/