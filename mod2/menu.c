#include <stdio.h>
#include <stdlib.h>

int		menu(int param)
{
	printf("Veuillez choisir un mode d'éclairage:\n1 pour allumer toutes les LED.\n2 pour allumer une LED sur deux.\n3 pour allumer une LED sur trois.\n4 pour allumer les LED progressivement.\n5 pour allumer la LED de votre choix. (Veuillez préciser quelle LED vous voulez allumer ensuite).\n");
	scanf("%i", &param);
	while ((param < 1) || (param > 5))
	{
		printf("Veuillez saisir une valeur comprise entre 1 et 5.");
		scanf("%i", &param);
	}
	return (param);
}
