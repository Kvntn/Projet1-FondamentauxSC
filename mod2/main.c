#include <stdio.h>
#include <stdlib.h>
#include "genCode.h"
#include "menu.h"
int		main()
{
	int param;
	int choice = 0;
	param = menu(param);
	if (param == 5)
		scanf("%i", &choice);
	gencode(param, choice);
	return 0;
}
