#include <iostream>
#include "menu.h"
#include "compte.h"
#include "compteepargne.h"
#include<string>
#include "menucomptedepot.h"
#include "menucompteepargne.h"


using namespace std;

int main()
{

    int choix;
    float leDepot;
    float leRetrait;
    float tauxInterets;
    float Interets;
    Compte unCompte;
    CompteEpargne unCompteEpargne;
    Menu unMenu("menu.txt");
    MenuCompteDepot unMenu1("menu1.txt");
    MenuCompteEpargne unMenu2("menu2.txt");
    do
    {

        int choix2;
        int choix3;

        cout << endl << "Bienvenue dans le menu principal. " << endl
             << endl;
        choix= unMenu.Afficher();
        switch (choix)
        {
        case OPTION_1:
            system("clear");
            choix2= unMenu1.Afficher();
            switch (choix2)
                do{
            case OPTION_1_Menu1:
                    system("clear");
                    unCompte.ConsulterSolde();
                    break;
                case OPTION_2_Menu1:
                    system("clear");
                    unCompte.ConsulterSolde();
                    cout << "Combien voulez vous déposer en Euros : " << endl;
                    cin >> leDepot;
                    unCompte.Deposer(leDepot);
                    break;
                case OPTION_3_Menu1:
                    system("clear");
                    unCompte.ConsulterSolde();
                    cout << "Combien voulez vous retirer en Euros : " << endl;
                    cin >> leRetrait;
                    unCompte.Retirer(leRetrait);
                    break;
                case QUITTER_Menu1:
                    system("clear");
                    break;
            }while( choix2 != QUITTER_Menu1);


            break;
        case OPTION_2:
            system("clear");
            choix3= unMenu2.Afficher();
            switch (choix3)
                do{
            case OPTION_1_Menu2:
                    system("clear");
                    unCompteEpargne.ConsulterSolde();
                    break;
                case OPTION_2_Menu2:
                    system("clear");
                    unCompteEpargne.ConsulterSolde();
                    cout << "Combien voulez vous déposer en Euros : " << endl;
                    cin >> leDepot;
                    unCompteEpargne.Deposer(leDepot);
                    break;
                case OPTION_3_Menu2:
                    system("clear");
                    unCompteEpargne.ConsulterSolde();
                    cout << "Combien voulez vous retirer en Euros : " << endl;
                    cin >> leRetrait;
                    unCompteEpargne.Retirer(leRetrait);
                    break;
                case OPTION_4_Menu2:
                    system("clear");
                    cout << "Indiquez vos intérents en pourcentage :" << endl;
                    cin >> tauxInterets;
                    tauxInterets = tauxInterets * (1/10);
                    Interets = unCompteEpargne.CalculerInteret(tauxInterets);
                    cout << "Vos intérets vous rapporteront cette année : " << Interets << "€" << endl;
                    break;
                case QUITTER_Menu2:
                    system("clear");
                    break;
            }while( choix3 != QUITTER_Menu2);
            break;

        case QUITTER_Menu2:
            break;

        }
    }while( choix != QUITTER);


    return 0;

}
