// declaration des header classe
#include <iostream>	//pour cin/cout
#include <fstream> 	//pour écrire/lire des fichiers
#include <string>	//pour les strings
#include <ncurses.h>

class Document
{
	public: 
        	//Nos méthodes
            	void afficher(void);
           	void load(std::string fichier);
           	void save();
    
	std::string monTexte;
	int longueur;
};