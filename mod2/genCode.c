#include <stdio.h>
#include <stdlib.h>
#include "gencode.h"

int gencode(int param, int choice)
{
	FILE *file;
	file = fopen("D:\\Users\\Kventin\\EXIA\\PROJET Fondamentaux Scientifique\\vFinale\\mod1\\main\\param.h", "w+"); // Création du param.h dans le dossier Arduino (module 1)
	if (file != NULL)
	{
		// Ecriture des paramètres nécessaires à l'allumage des LEDs
		fprintf(file, "int param = %i;", param);
		fprintf(file, "\nint choice = %i;", choice);
	}
	else
	{
		printf("Erreur dans la création de param.h, veuillez recommencer.");
		exit(-1);
	}
	fclose(file);
	return 0;
}
