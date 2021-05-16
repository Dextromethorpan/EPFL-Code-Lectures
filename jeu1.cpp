//Versión mejorada de la clase JeuMorpion

enum CouleurCase {VIDE, ROND,CROIX};

typedef array <array<CouleurCase,3>, 3> Grille;

class JeuMorpion
{
    public:
        void initialise()
        {
            for(auto& ligne: grille)
            {
                for(auto& kase: ligne)
                {
                    kase=VIDE;
                }
            }
        }

        bool placer_rond(size_t ligne, size_t colonne)
        {
            return placer_coup(ligne, colonne, ROND);
        }

        bool placer_croix(size_t ligne, size_t colonne)
        {
            return placer_coup(ligne, colonne, CROIX);
        }



    private:
        Grille grille;
};