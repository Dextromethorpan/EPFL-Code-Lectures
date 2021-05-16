//Héritage Multiple

//Una subclase tiene dos superclases.

class Ovovivipare: public Ovipare, public Vivipare
{
    public:
        Ovovivipare(unsigned int, unsigned int);
        virtual ~Ovovivipare();

    protected:
        bool espece_rare;

};

/*
El orden en que llamamos a las superclases va a
ser importante en el orden en el que establecemos
a los atributos del constructor de la subclase.
*/

/*Para evitar el enmascaramiento entre métodos
de las superclases, se usa: 
using NomSuperClass::NomAttributeOuMethode;*/

class Ovovivipare: public Ovipare, public Vivipare
{
    public:
        using Vivipare::afficher;

};