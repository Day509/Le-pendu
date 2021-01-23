#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mot.h"
#include "pendu.h"

int main(int argc, char const *argv[])
{	
	int taille_tab = 15;
	int taille_mot;
	printf("Bonjour, bienvenue dans le jeu du pendu\n");
	char mot[taille_tab];	
	taille_mot = lecture_fichier(mot);
	int essai;
	essai = 2 * taille_mot;
	printf("Vous aurez %d coups pour trouver le bon mot\n", essai);
	pendu(mot,essai,taille_mot);
	return 0;
}
