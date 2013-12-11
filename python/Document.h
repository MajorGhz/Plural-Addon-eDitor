// declaration des header classe
#include <iostream>	//pour cin/cout
#include <fstream> 	//pour écrire/lire des fichiers
#include <string>	//pour les strings
#include <vector>	//pour les vectors
#include <ncurses.h>

class Document
{
	public: 
        	//Nos méthodes
            	void afficher(int row, int ypos, int col);
           	void load(std::string fichier ,int col);
           	void save();
    
	std::string monTexte[1000];
	std::vector<std::string> monTexte2;
	int longueur;
	
	
};