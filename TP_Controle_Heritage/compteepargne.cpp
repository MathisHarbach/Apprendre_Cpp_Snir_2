#include "compteepargne.h"
#include <iostream>
#include <math.h>

using namespace std;



CompteEpargne::CompteEpargne()
{
}

void CompteEpargne::ConsulterSolde()
{
    cout << " Votre Solde Epargne est actuellement de " << soldeEpargne << "€" << endl;
}

float CompteEpargne::CalculerInteret(float _tauxInteret)
{
    float interetsGeneraux;
    interetsGeneraux = (soldeEpargne*_tauxInteret);
    return interetsGeneraux;

}

void CompteEpargne::Deposer(const float montant)
{

    soldeEpargne = soldeEpargne + montant;
    cout << "Votre solde à été actualisé." << endl;

    }

void CompteEpargne::Retirer(const float montant)
{
    if (soldeEpargne - montant >=0)
    {
    soldeEpargne = soldeEpargne - montant;
    cout << "Votre solde à été actualisé." << endl;
    }
    else {
        cout <<endl<<"Vous n'avez pas assez pour réaliser l'opération." << endl;
    }
}

