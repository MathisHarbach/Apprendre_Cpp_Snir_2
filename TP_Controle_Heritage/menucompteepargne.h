#ifndef MENUCOMPTEEPARGNE_H
#define MENUCOMPTEEPARGNE_H
#include <string>
#include <algorithm>
#include <fstream>
#include <iomanip>
#include <iostream>

using namespace std;

class MenuCompteEpargne
{
private:
    string nom;
    string* options;
    int nbOptions;
    int longueurMax;

public:
    MenuCompteEpargne(const string in_nom);
    ~MenuCompteEpargne();
    int Afficher();
    static void AttendreAppuieTouche();


};

enum CHOIX_MENUEPARGNE
{
    OPTION_1_Menu2 = 1,
    OPTION_2_Menu2 = 2,
    OPTION_3_Menu2 = 3,
    OPTION_4_Menu2 = 4,
    QUITTER_Menu2 = 5
};

#endif // MENUCOMPTEEPARGNE_H
