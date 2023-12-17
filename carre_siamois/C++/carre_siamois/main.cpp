#include "siamois.hpp"

int main()
{
    Siamois * carre = new Siamois(3);
    carre->AffichageCarre();

    carre->remplir_carre(1,0,1,-1,1,1,0);
    carre->AffichageCarre();
}
