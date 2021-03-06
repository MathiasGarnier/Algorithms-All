#include <stdio.h>

#define nb_cigarettes 10
#define nb_cigarettesPaquet 20
#define prixPaquet 7

#define nb_jourAnnee 365

// 3 - 1 - 3 - 1 -- (8) -- 2               nb_jourAnee + 1 -> Année bisextile;
#define dixAns ((8 * nb_jourAnnee) + (2 * (nb_jourAnnee + 1)))

int main (int argc, const char* argv[]) 
{

    /*
            Pour laisser une part d'anonymat à Jean, nous allons l'appeller Eric.
            Eric fume en moyenne 10 cigarettes par jour.
            En admettant qu'un paquet de cigarettes contient 20 cigarettes et coûte en moyenne 7 euros.
            Quel montant en euros Eric aura économisé au bout de 10 ans ?
    */

    int nb_cigarettesFume = NULL;

    nb_cigarettesFume = (((nb_cigarettesPaquet / nb_cigarettes) * prixPaquet) * dixAns);
    printf("Eric aurait pu economiser %d euros en dix ans.", nb_cigarettesFume); //Resultat : 51128
    
    return 0;
}
