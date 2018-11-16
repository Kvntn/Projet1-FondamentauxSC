#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "actions.h"
#include "donnees.h"

FILE*	open_beat_file()
{
	FILE *file; // pointeur de fichier
	file = fopen("beat.txt", "r"); // Ouverture du fichier beat.txt en lecture seule
	if (file == NULL)
		return NULL;
	return(file);
}
