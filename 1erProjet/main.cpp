#include <iostream>
#include <iomanip>
#include <fstream>
#include<string>


using namespace std;

int main()
{

/*
    cout << "Hello World!" ;

    char phrase [80+1] ;
    cout << "Saisirunephrase : " ;
    cin >> phrase;
    cout << "Votre phrase est:" << phrase << endl;


    int val=192;
    float val2=3.141592654;
    bool sortie=true;
    cout << "Affichage par défaut:" << val << endl;
    cout << "Affichage en hexadécimal:" << hex << val << endl;
    cout << "Affichage en décimal:" << dec << val << endl;
    cout << hex << val << "" << uppercase << val << "";
    cout << showbase << val << nouppercase << "" << val << endl;
    cout << "+" << setfill('-') << setw(21) << "+" << setfill(' ') << endl;
    cout << "|" << setw(20) << left << "abc" << "|" << endl;
    cout << "|" << setw(20) << right << "abc" << "|" << endl;
    cout << "+" << setfill('-') << setw(21) << "+" << setfill(' ') << endl;
    cout << dec << sortie << "" << boolalpha << sortie << endl;
    cout << val2 << "" << fixed << val2 << "" << scientific << val2 <<"";
    cout << fixed << setprecision(2) << val2 << endl;
    cout << "Entrez un nombre en octal:";
    cin >> oct >> val;
    cout <<"vous avez saisie" << dec<< val<< " en décimal" << endl;
*/

/*
    string nomDuFichier;

    cout << "Entrer le nom du fichier à lire: ";
    cin >> nomDuFichier;

    fstream fichier(nomDuFichier.c_str());
    if (!fichier.is_open())

        cerr << "Erreur lors de l'ouverture du fichier" << endl;

    else {

        string pays;
        int nbOr;
        int nbArgent;
        int nbBronze;


        cout << "+" << setfill('-') << setw(44) << "+" << setfill(' ') << endl;

        do{
            fichier >> pays >> nbOr >> nbArgent >> nbBronze;;
            if(fichier.good()){


                cout << "|" << setw(16) << left << pays << "|" << setw(8) << right << nbOr << "|" << setw(8) << right << nbArgent << "|"  << setw(8) << right << nbBronze << "|" << endl ;


            }

        }while(!fichier.eof());

        cout << "+" << setfill('-') << setw(44) << "+" << setfill(' ') << endl;
    }
*/

// Exemple d'ecriture dans un fichier -> Remplacer les cout par le nom du fichier ou l'on veut écire.

    string nomDuFichier2;

    cout << "Entrer le nom du fichier à ecrire: ";
    cin >> nomDuFichier2;

    ifstream fichier("medailles.txt");
    ofstream fichier2(nomDuFichier2.c_str());

    if (!fichier.is_open())

        cerr << "Erreur lors de l'ouverture du fichier" << endl;

    else {

        string pays;
        int nbOr;
        int nbArgent;
        int nbBronze;


        fichier2 << "+" << setfill('-') << setw(44) << "+" << setfill(' ') << endl;

        do{
            fichier >> pays >> nbOr >> nbArgent >> nbBronze;;
            if(fichier.good()){


                fichier2 << "|" << setw(16) << left << pays << "|" << setw(8) << right << nbOr << "|" << setw(8) << right << nbArgent << "|"  << setw(8) << right << nbBronze << "|" << endl ;


            }

        }while(!fichier.eof());

        fichier2 << "+" << setfill('-') << setw(44) << "+" << setfill(' ') << endl;
    }
    fichier.close();
    fichier2.close();




     return 0;
}


