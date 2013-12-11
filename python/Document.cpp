#include "Document.h"


using namespace std;


void Document::afficher(int row, int ypos, int col) //definition de la methode afficher
{	
	clear();
	//Affichage d'une bande blanche en haut pour le futur menu 
	attron(A_REVERSE);
	for (int i=0; i<col;++i)
	{
		move(0,i);
		printw(" ");
	}
	move(0,(col/2)-2);
	printw("PAD");
	attroff(A_REVERSE);
	//on affiche le contenu de la variable en utilisant la méthode ncurses
	for (int i=0;i<(row-2);++i)
	{
	move(i+1,0);
	printw(monTexte[i+ypos].c_str()); // Affichage de la chaîne monTexte avec convertion
	}
	move(row-1,0);
	printw("%d %d",row,ypos);
	refresh();
};


void Document::load(string fichier, int col)
{
	//On définit un flux de lecture "monFlux" avec le nom de fichier passé en argument (on utilise ".c_str()" sinon ça passe pas) 
	ifstream monFlux(fichier.c_str());
	
	//On test que le fichier existe bien
	if(monFlux)
	{
	//Tout est prêt pour la lecture
		//string ligne;     //Une variable pour stocker les lignes lues
		//while(getline(monFlux, ligne))    //Tant qu'on n'est pas a la fin, on lit
		//{
			//On ajoute chaque ligne a notre variable string monTexte de la classe Document
		//	monTexte += ligne + '\n' ;
		//}
		char c;
		int Nbr=0;
		int Lin=0;
		while(monFlux.get(c))
		{
		
			
			
				
			monTexte[Lin] += c;
			Nbr++;
			if (c == 10 || Nbr == col )
				{
				Nbr=0;
				Lin++;
					
				}
		}
		
	}
	else
	{
		printw("ERREUR: Impossible d'ouvrir le fichier en lecture.");
	}
}