//Héritage

/*
No podemos acceder a los atributos privados de la
superclase A en métodos de las subclases (B o C)
Sí, si los atributos de A son protected. Pero solo
podemos llamar a estos atributos en los métodos
de B o C.
*/


//---------------------------------------

//Masquage dans une Hiérarchie

/*
Hay enmascaramiento del método de la subclase al
método de la superclase.
Esto sucede siempre y cuando existan dos métodos
iguales (uno en la superclase y otro en la
subclase).
Misma situación para atributos.

Una manera para accès à une méthode masquée es 
la siguiente:

NomClasse::méthode ou attribut 
*/

class Guerrier : public Personnage
{
    void rencontrer(Personnage& person)
    {
        Personnage::rencontrer(perso);
        frapper(person);
    }

};

//--------------------------------------


//Constructeurs et héritage

/* Para pasar el constructor A de la superclase 
como un argumento del constructor B de la subclase
se hace considerando como que el constructor A es
un atributo de la clase B.
*/

class FigureGeometrique
{
    protected: Position position;
    public:
        FigureGeometrique(double x, double y)
        : position(x,y) {}
};


class Rectangle: public FigureGeometrique
{
    protected: double largeur; double hauteur;
    public:
        Rectangle(double x, double y, double l,
                  double h)
        :FigureGeometrique(x,y), largeur(l),
         hauteur(h)
         {}
};

/*
El constructor de la subclase siempre termina
llamando al constructor por defecto del 
constructor de la superclase.
*/

//----------------------------------------------

//Ordre d'appel des constructeurs et des
//destructeurs

/*
Cada vez que establecemos una cadena de 
herencia, se establece un order de llamado 
para los constructores de las respectivas 
clases. 
El orden de llamado de los destructores es 
en orden inverso al orden de llamado de los
constructores.
*/


//Héritage et constructeur de copie

Rectangle(Rectangle const& autre)
:FigureGeometrique(autre),
     largeur(autre.largeur),
      hauteur(autre.hauteur)
      {}

//Copie Profund
