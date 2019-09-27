#include "compte.h"
#include <iostream>

using namespace std;



void Compte::ConsulterSolde()
{
    cout << " Votre Solde Compte est actuellement de " << solde << "€" << endl;
}

void Compte::Deposer(const float montant)
{
    solde = solde + montant;
    cout << "Votre solde à été actualisé." << endl;
}

void Compte::Retirer(const float montant)
{
    if (solde - montant >=0)
    {
    solde = solde - montant;
    cout << "Votre solde à été actualisé." << endl;
    }
    else {
        cout << "Vous n'avez pas assez pour réaliser l'opération." << endl;
    }
}

Compte::Compte()
{

}

Compte::~Compte()
{

}

Compte::Compte(const float montant_initial)
{

}
