#include "Document.h"

using namespace std;

int row,col; //variables globales pour l'écran qui vont être utilisées dans plusieurs fonctions

void InitScreen()
{
	// Initialisation d'un écran ncurses
	initscr();
	keypad(stdscr, TRUE);	//pour avoir Fn et les fleches
	getmaxyx(stdscr,row,col);
	
}

void CloseScreen()
{
	// On  actualise et quite proprement au niveau de ncurses
	refresh();
	endwin();
}

//Utilisation d'une commodité du C++ pour récupérer au niveau du main() les arguments supplémentaires passés avec la commande (cf. exemple "CommandLineArgs.cpp" du chap. 3 "Thinking C++") 
int main(int argc, char* argv[])
{
	// declaration d'un document editable sous la classe Document 
	Document docEnCours;
	
	int ypos=0; // pour le curseur
	
	// vérifie qu'un nom de fichier a bien été donné 
	if (argc == 1)
	{	
		cout << "Rien à faire. Veuillez donner un nom de fichier." <<endl;
	}
	else
	{
		InitScreen();
		docEnCours.load(argv[1], col);
		int c;
		do
		{
		docEnCours.afficher(row,ypos,col);
			switch(c=getch())
			{
				case KEY_UP:
					(ypos==0) ? ypos=0 : ypos-- ;
					break;
				case KEY_DOWN:
					ypos++;
					break;
					
					
				case KEY_LEFT:
					continue;
			}
		
		}while(true);
		CloseScreen();
	}

	return 0;
}
