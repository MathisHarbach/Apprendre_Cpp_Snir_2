#include "menu.h"


Menu::Menu(const string in_nom)
{
    ifstream fichierMenu(in_nom.c_str());
    if(!fichierMenu.is_open())
    {
        cerr<<"Erreur lors de l'ouverture du fichier"<<endl;
        nbOptions=0;
    }
    else
    {
        nbOptions=static_cast<int>(count(istreambuf_iterator<char>(fichierMenu),istreambuf_iterator<char>(),'\n'));
        fichierMenu.seekg(0,ios::beg);
        options = new string [nbOptions];
        for(int indice=0;indice<nbOptions;indice++)
        {
            getline(fichierMenu,options[indice]);
            if(static_cast<int>(options[indice].length())>longueurMax)
            {
                longueurMax = static_cast<int>(options[indice].length());
            }
        }
    }
    fichierMenu.close();
}


Menu::~Menu()
{
    delete [] options;
}

int Menu::Afficher()
{
    cout<<"+"<<setfill('-')<<setw(5)<<"+"<<setw(longueurMax+2)<<"+"<<endl;
    for(int indice=0;indice<nbOptions;indice++)
    {
        cout<<"|  "<<indice+1<<" |"<<setfill(' ')<<setw(longueurMax+1)<<left<< options[indice]<<"|"<<endl;
    }
    cout<<"+"<< right << setfill('-')<<setw(5)<<"+"<<setw(longueurMax+2)<<"+"<<endl;
    cout <<"Veuillez entrer un nombre entre 1 et 3 "<<endl;
    cout <<"-----(Si vous en choisissez un autre le menu rechargera)-----" << endl;
    cout << "Votre choix : ";
    int choix;
    cin>>choix;
    return choix;
}

