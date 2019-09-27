#ifndef MENU_H
#define MENU_H
#include <string>
#include <algorithm>
#include <fstream>
#include <iomanip>
#include <iostream>

using namespace std;

class Menu
{
private:
    string nom;
    string* options;
    int nbOptions;
    int longueurMax;

public:
    Menu(const string in_nom);
    ~Menu();
    int Afficher();
    int AfficherChoix1();
    int AfficherChoix2();
    static void AttendreAppuieTouche();


};

enum CHOIX_MENU
{
    OPTION_1 = 1,
    OPTION_2 = 2,
    QUITTER = 3
};

#endif // MENU_H
