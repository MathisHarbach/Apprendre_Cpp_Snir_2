#ifndef MENUCOMPTEDEPOT_H
#define MENUCOMPTEDEPOT_H
#include <string>
#include <algorithm>
#include <fstream>
#include <iomanip>
#include <iostream>

using namespace std;

class MenuCompteDepot
{
private:
    string nom;
    string* options;
    int nbOptions;
    int longueurMax;

public:
    MenuCompteDepot(const string in_nom);
    ~MenuCompteDepot();
    int Afficher();
    static void AttendreAppuieTouche();


};

enum CHOIX_MENUDEPOT
{
    OPTION_1_Menu1 = 1,
    OPTION_2_Menu1 = 2,
    OPTION_3_Menu1 = 3,
    QUITTER_Menu1 = 4
};

#endif // MENUCOMPTEDEPOT_H
