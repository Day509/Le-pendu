#include <time.h>


int lecture_fichier(char mot_mystere[])
{
	srand(time(NULL));
	FILE* fichier = NULL;
	fichier = fopen("dico.txt", "r");
	int nombre_ligne = 0;
	int taille;
	
	if (fichier == NULL)
	{
		printf("Oups, ya un problème avec l'ouverture du fichier\n");
		exit(-1);
	}
	char lettre_lu;

	while(lettre_lu != EOF)
	{
		lettre_lu = fgetc(fichier);
		if (lettre_lu == '\n')
		{
			nombre_ligne += 1;
		}
	}

	int aleatoire;
	
	aleatoire = rand() % nombre_ligne + 1;
	rewind(fichier);
	while(aleatoire > 0)
	{
		lettre_lu = fgetc(fichier);
		if (lettre_lu == '\n')
		{
			aleatoire -= 1;
		}
	}
	fgets(mot_mystere, 30, fichier);
	mot_mystere[strlen(mot_mystere)-1] = '\0';
	taille = strlen(mot_mystere);
	fclose(fichier);
	printf("Le mot mystère contient %d lettre\n", taille);
	return taille;
}






































