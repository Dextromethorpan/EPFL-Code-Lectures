//Virtuelle /Non virtuelle Méthode

#include<iostream>

using namespace std;

class Mammifere
{
    public:
        Mammifere()
        {
            cout<<"Un nouveau mammifère est né!"<<endl;
        }
        virtual ~Mammifere()
        {
            cout<<"Un mammifère est en train de mourir"<<endl;
        }
        void manger() const
        {
            cout<<"mmmmm"<<endl;
        }
        virtual void avancer() const
        {
            cout<<"Un grand pas pour l'humanité"<<endl;
        }
};

class Dauphin:public Mammifere
{
    public:
        Dauphin()
        {
            cout<<"Cu,Cu"<<endl;
        }
        ~Dauphin()
        {
            cout<<"Flipper, c'est fini"<<endl;
        }
        void manger() const
        {
            cout<<"Un poisson"<<endl;
        }
        void avancer() const
        {
            cout<<"Je nage"<<endl;
        }

};


int main()
{
    Mammifere* lui(new Dauphin());
    lui->avancer();
    lui->manger();
    delete lui;

    return 0;
}

/*
El objeto lui es un puntero que apunta a la clase Dauphin.
Como la clase Dauphin no tiene definido un constructor
por defecto, se establece que el constructor por 
defecto de la clase Dauphin es el constructor de la clase
Mammifere.
Por eso, primero se reproduce el contenido del constructor
por defecto de la clase Dauphin que es el mismo que el
de la clase Mammifere, osea "Un nouveau..".
Luego, se reproduce el constructor de Dauphin, osea 
"Cu,Cu". 
/lui->/ llama a métodos. Dado que ambas clases (tanto la 
superclase como la subclase) cuentan los mismos métodos,
entonces /lui->/ respetaría siempre a los métodos de la
superclase (porque, en C++ siempre se respeta el type 
de variable). Pero como se utiliza virtual para avancer(),
la regla anterior se rompe y se llama al método avancer
de la subclase.
*/