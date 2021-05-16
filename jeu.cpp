//Jeu de Morpion

typedef array<int,9> Grille;

class JeuMorpion
{
    public:
        void initialise()
        {grille = new Grille;}

        Grille* get_grille()
        {return grille;}

    
    private:
        Grille* grille;

};

//para declarar el objeto de JeuMorpion
//JeuMorpion jeu;

//el método jeu.initialise() declara una
//grilla "New Grilla" de 9 columnas

//el método jeu.get_grille() retorna un
//puntero a la grilla "New Grilla"

JeuMorpion jeu;
jeu.initialise();
(*jeu.get_grille())[0]=1;