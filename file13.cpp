//Masquage, Substitution et Surcharge

#include<iostream>

using namespace std;

class A
{
    public:
        virtual void m1(double i) const
        {
            cout<<"A::m1(int): "<<i<<endl;
        }
        virtual void m1(string const &s) const
        {
            cout<<"A::m1(string): "<<s<<endl;
        }
};

class B:public A 
{
    public:
        virtual void m1(string const &s) const
        {
            cout<<"B::m1(string)"<<endl;
        }
};

class C: public A 
{
    public:
        virtual void m1(double  x) const
        {
            cout<<"C::m1(double): "<<x<<endl;
        }
};



int main()
{   /*
    B b;

    b.A::m1(2);
    b.m1("2");

    C c;
    c.m1(2);
    c.A::m1("2");
    c.A::m1(2);
    */


    B b;
    C c;
    A* pa(nullptr);

    /*
    El puntero /pa/ apunta a los objetos de las clases
    B y C. Pero, /pa/ pertenece a la clase A.
    Por lo tanto, va a priorizar a los métodos
    de la clase A, siempre y cuando los métodos 
    de las clases (que contienen los objetos a los que
    apunta /pa/) no sean los mismo que los de A.
    En este último caso, /pa/ no respeta a los métodos
    de A. 
    */



    pa=&b;
    pa->m1("2");
    pa->m1(2);

    pa=&c;
    pa->m1(2); 



    return 0;
}