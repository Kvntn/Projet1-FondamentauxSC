#include <stdio.h>
#include <stdlib.h>
#include "actions.h"
#include "donnees.h"
#include "menu.h"

int		menu()
{
	int choice;
	int time = 0;
	int maximum;
	int minimum;
	int n = 0;
	printf("\n\n==========Veuillez choisir le mode d'affichage des données==========\n\n1 pour afficher les données dans l'ordre de stockage des données.\n\n2 pour afficher les données dans l'ordre croissant.\n\n3 pour afficher les données dans l'ordre décroissant.\n\n4 pour rechercher et afficher les données pour un temps particulier.\n\n5 pour afficher la moyenne de pouls dans une plage de temps donnée.\n\n6 pour afficher le nombre de lignes actuellement en mémoire.\n\n7 pour rechercher et afficher le minimum de pouls.\n\n8 pour rechercher et afficher le maximum de pouls.\n\n0 pour quitter le programme.\n\n");
	scanf("%i", &choice);
	n = nb_ligne();
	if (n == 0)
	{
		printf("Le fichier est vide.");
		return EXIT_FAILURE;
	}
	while (choice != 0)
	{
		switch(choice) // Demande à l'utilisateur le mode d'affichage désiré
		{
			case 1 :
			printf("Les données stockées sont les suivantes :\n");
			display_data(n);
			printf("\n");
			break;

			case 2 :
			printf("Tapez 1 pour les trier selon le temps, 2 pour les trier selon le pouls.\n");
			scanf("%i", &choice);
			printf("Le tableau trié est le suivant :\n");
			tri_croissant(choice, n);
			printf("\n");
			break;

			case 3 :
			printf("Tapez 1 pour les trier selon le temps, 2 pour les trier selon le pouls.\n");
			scanf("%i", &choice);
			printf("Le tableau trié est le suivant :\n");
			tri_decroissant(choice, n);
			printf("\n");
			break;

			case 4 :
			printf("Tapez le temps recherché.\n");
			scanf("%i", &time);
			search_time(time, n);
			printf("\n");
			break;

			case 5 :
			printf("Tapez la première valeur de l'intervalle.\n");
			scanf("%i", &minimum);
			printf("Tapez la deuxième valeur de l'intervalle.\n");
			scanf("%i", &maximum);
			moyenne(minimum, maximum, n);
			printf("\n");
			break;

			case 6 :
			n = nb_ligne();
			printf("Il y a %d lignes en mémoire.\n", n);
			printf("\n");
			break;

			case 7 :
			search_min(n);
			printf("\n");
			break;

			case 8 :
			search_max(n);
			printf("\n");
			break;

			default :
			printf("Tapez 1 pour continuer, ou 0 pour fermer le programme, \n");
			scanf("%i", &choice);
			printf("\n");
			break;
		}
		printf("Veuillez choisir le mode d'affichage des données, ou taper 0 pour quitter le programme.\n");
		scanf("%i", &choice);
	}
	return 0;
}
