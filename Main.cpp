#include <iostream> //pour cout/cin
#include <string> // Obligatoire pour pouvoir utiliser les objets string
#include "Document.h"

using namespace std;


//Utilisation d'une commodité du C++ pour récupérer au niveau du main() les arguments supplémentaires passés avec la commande (cf. exemple "CommandLineArgs.cpp" du chap. 3 "Thinking C++") 
int main(int argc, char* argv[])
{
	// declaration d'un document editable sous la classe Document 
	Document docEnCours;
	
	//vérifie qu'un nom de fichier a bien été donné 
	if (argc == 1)
	{	
		cout << "Rien à faire. Veuillez donner un nom de fichier. Exit" <<endl;
	}
	else
	{
		docEnCours.load(argv[1]);
		docEnCours.afficher();
	}
		
	return 0;
}
