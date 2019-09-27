#ifndef COMPTEEPARGNE_H
#define COMPTEEPARGNE_H
#include "compte.h"

class CompteEpargne : public Compte
{
public:
    CompteEpargne();
    void ConsulterSolde();
    float CalculerInteret(float _tauxInteret);
    void Deposer(const float montant);
    void Retirer(const float montant);


protected:
    float soldeEpargne = 0;

};

#endif // COMPTEEPARGNE_H
