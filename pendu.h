#include <ctype.h>
#include <string.h>

char saisie() 
{ 
    char lettre = 0;
 
    lettre = getchar(); // On lit le premier caractère
    lettre = toupper(lettre); // On met la lettre en majuscule si elle ne l'est pas déjà
 
    // On lit les autres caractères mémorisés un à un jusqu'au \n (pour les effacer) 
    while (getchar() != '\n') ;
 
    return lettre; // On retourne le premier caractère qu'on a lu 
}

void pendu(char mot[], int essai, int taille)
{
	int coup = 0;
	char mot_mystere[taille];
	for (int i = 0; i < taille; i++)
	{
		mot_mystere[i] = '*';
	}
	printf("Le mot mystère a été choisi\n");
	while(essai != 0)
	{
		printf("coup : %d\n\n", essai);
		printf("%s\n", mot_mystere);
		printf("Proposer une lettre: ");
		char lettre = saisie();
		for (int i = 0; i < taille; i++)
		{
			if (lettre == mot[i])
			{
				mot_mystere[i] = lettre;
				printf("%s\n", mot_mystere);
			}
		}
		printf("_______________________________________________________________\n");
		
		if(strcmp(mot_mystere, mot) == 0)
		{
			break;
		}
		essai--;
		coup++;
	}
	if(strcmp(mot_mystere,mot) == 0)
	{
		printf("Bravo, vous avez trouver le mot en %d coup\n", coup);
	}
	else
		printf("Dommage, vous n'avez pas trouvez le bon\nLe bon mot était :%s\n", mot);

}