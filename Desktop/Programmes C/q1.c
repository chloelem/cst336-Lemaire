#include "bmp.h"


PIXEL** tableau_2D(int longueur, int hauteur)
{
	int i;
	PIXEL **tableau = NULL;
	tableau = (PIXEL**)malloc(hauteur * sizeof(PIXEL*));
	for (i = 0; i < hauteur; i++)
	{
		*(tableau + i) = (PIXEL*)malloc(longueur * sizeof(PIXEL));
	}

	return tableau;
}
