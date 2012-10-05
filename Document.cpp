#include "Document.h"


using namespace std;


void Document::afficher() //definition de la methode afficher
{
	//on affiche le contenu de la variable en utilisant la méthode ncurses
	printw(monTexte.c_str()); // Affichage de la chaîne monTexte avec convertion
};


void Document::load(string fichier)
{
	//On définit un flux de lecture "monFlux" avec le nom de fichier passé en argument (on utilise ".c_str()" sinon ça passe pas) 
	ifstream monFlux(fichier.c_str());
	
	//On test que le fichier existe bien
	if(monFlux)
	{
	//Tout est prêt pour la lecture
		string ligne;     //Une variable pour stocker les lignes lues
		while(getline(monFlux, ligne))    //Tant qu'on n'est pas a la fin, on lit
		{
			//On ajoute chaque ligne a notre variable string monTexte de la classe Document
			monTexte += ligne + '\n' ;
		}
	}
	else
	{
		printw("ERREUR: Impossible d'ouvrir le fichier en lecture.");
	}
}