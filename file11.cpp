//Polymorphisme et résolution dynamique

#include<iostream>

class Personnage
{
    public:
        virtual void rencontrer(Personnage& p) const
        {
            std::cout<<"Bonjour!"<<std::endl;
        }

};

class Guerrier: public Personnage
{
    public: 
        void rencontrer(Personnage& p) const
        {
            std::cout<<"Boum!"<<std::endl;
        }

};

void faire_rencontrer( Personnage  &un, 
                       Personnage  &autre)
{
    //résolution statique
    un.rencontrer(autre);
}

int main()
{
    Personnage p;
    Guerrier g;

    faire_rencontrer(g,p);

    /*
    Sin Virtual:
    sin importar el orden entre g y p en faire_rencontrer,
    siempre se prioriza a Personnage.

    Con Virtual:
    Se prioriza unicamente a Guerrier, si primero se
    establece a g en faire_rencontre.
    */
    return 0;

}