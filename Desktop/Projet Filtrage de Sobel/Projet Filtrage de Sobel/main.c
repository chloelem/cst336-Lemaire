#include <stdio.h>
#include "bmp.h"
#define N 256

PIXEL** application_matrice(PIXEL *image, int longueur, int hauteur, int matrice[3][3])
{
	//int matrice[3][3] = { {-1, 0, -1}, {-2, 0, 2}, {-1, 0, 1} };
	int coef = 6;
	PIXEL **copie_a_modifier = copier_tableau(image, longueur, hauteur);
	PIXEL **copie_original = copier_tableau(image, longueur, hauteur);
	PIXEL sauvegarde;
	int size = longueur * hauteur, i = 1, j = 1, x_arret = longueur - 1, y_arret = hauteur - 1;
	while (j < y_arret)
	{
		//printf("Etape %d de j \n", i, j);
		sauvegarde.red = matrice[1][1] * copie_original[i][j].red + matrice[0][0] * copie_original[i - 1][j - 1].red + matrice[1][0] * copie_original[i][j - 1].red
			+ matrice[2][0] * copie_original[i + 1][j - 1].red + matrice[0][1] * copie_original[i - 1][j].red + matrice[2][1] * copie_original[i + 1][j].red
			+ matrice[0][2] * copie_original[i - 1][j + 1].red + matrice[1][2] * copie_original[i][j + 1].red + matrice[2][2] * copie_original[i + 1][j + 1].red;
		//sauvegarde.red = sauvegarde.red / coef;
		if (sauvegarde.red > 255) sauvegarde.red = 255;
		if (sauvegarde.red < 0) sauvegarde.red = 0;

		sauvegarde.green = matrice[1][1] * copie_original[i][j].green + matrice[0][0] * copie_original[i - 1][j - 1].green + matrice[1][0] * copie_original[i][j - 1].green
			+ matrice[2][0] * copie_original[i + 1][j - 1].green + matrice[0][1] * copie_original[i - 1][j].green + matrice[2][1] * copie_original[i + 1][j].green
			+ matrice[0][2] * copie_original[i - 1][j + 1].green + matrice[1][2] * copie_original[i][j + 1].green + matrice[2][2] * copie_original[i + 1][j + 1].green;
		//sauvegarde.green = sauvegarde.green / coef;
		if (sauvegarde.green > 255) sauvegarde.green = 255;
		if (sauvegarde.green < 0) sauvegarde.green = 0;

		sauvegarde.blue = matrice[1][1] * copie_original[i][j].blue + matrice[0][0] * copie_original[i - 1][j - 1].blue + matrice[1][0] * copie_original[i][j - 1].blue
			+ matrice[2][0] * copie_original[i + 1][j - 1].blue + matrice[0][1] * copie_original[i - 1][j].blue + matrice[2][1] * copie_original[i + 1][j].blue
			+ matrice[0][2] * copie_original[i - 1][j + 1].blue + matrice[1][2] * copie_original[i][j + 1].blue + matrice[2][2] * copie_original[i + 1][j + 1].blue;
		//sauvegarde.blue = sauvegarde.blue / coef;
		if (sauvegarde.blue > 255) sauvegarde.blue = 255;
		if (sauvegarde.blue < 0) sauvegarde.blue = 0;

		copie_a_modifier[i][j].red = sauvegarde.red;
		copie_a_modifier[i][j].green = sauvegarde.green;
		copie_a_modifier[i][j].blue = sauvegarde.blue;

		i += 1;
		if (i == x_arret)
		{
			i = 1;
			j += 1;
		}
	}

	return copie_a_modifier;
}


PIXEL** copier_tableau(PIXEL* image, int longueur, int hauteur)
{
	PIXEL** tab = NULL;
	tab = tableau_2D(longueur, hauteur);
	int z = 0, size = longueur * hauteur, i = 0, j = 0;
	PIXEL sauvegarde;
	while (z < size)
	{
		if (i == longueur)
		{
			i = 0;
			j++;
		}
		sauvegarde.blue = image[z].blue;
		sauvegarde.green = image[z].green;
		sauvegarde.red = image[z].red;
		tab[i][j] = sauvegarde;
		i++;
		z++;
	}

	return tab;
}

int main(void)
{
	BITMAP * const lenaBitmap = loadBitmapFile("lena_256_color.bmp");
	BITMAP * const lenaBitmap_t = loadBitmapFile("lena_256_bw.bmp");
	if (lenaBitmap->infoHeader.bits == 24 && !lenaBitmap->palette)
	{
		PIXEL * const image = (PIXEL *)lenaBitmap->raster;
		PIXEL * const image_t = (PIXEL *)lenaBitmap_t->raster;
		const unsigned int size = lenaBitmap->infoHeader.height * lenaBitmap->infoHeader.width;
		int hauteur = lenaBitmap->infoHeader.height, longueur = lenaBitmap->infoHeader.width;

		/*
		for (int i = 0; i < lenaBitmap->infoHeader.height; i++)
		{
			for (int j = 0; j < lenaBitmap->infoHeader.width; j++)
			{
				sobel(i, j, image, image_t, lenaBitmap->infoHeader.height, lenaBitmap->infoHeader.width, &sobel_f[0], 9);
			}
		}

	}
	*/

		//Question 1:

		/*
		int z = 0, r = 0, v = 0, b = 0, i = 0, j = 0;
		PIXEL sauvegarde;
		while (z < size)
		{
			if (i == longueur)
			{
				i = 0;
				j++;
			}
			sauvegarde.blue = image[z].blue;
			sauvegarde.green = image[z].green;
			sauvegarde.red = image[z].red;
			tab[i][j] = sauvegarde;
			i++;
			z++;
		}
		*/

		//printf("Le pixel pour tab %d est: r %d , v %d, b %d \n", N, tab[0][1].red, tab[0][1].green, tab[0][1].blue);
		//printf("\nLe pixel pour image est : r %d, v %d, b %d\n", image[N].red, image[N].green, image[N].blue);

		int matrice_t[3][3] = { {1, 1, 1}, {1, 1, 1}, {1, 1, 1} };
		int matrice_1[3][3] = { {-1, 0, -1}, {-2, 0, 2}, {-1, 0, 1} };
		int matrice_2[3][3] = { { 1, 2, 1 },{ 0, 0, 0 },{ -1, -2, -1 } };
		int i = 0, z = 0, j = 0;
		PIXEL **image_gx;
		PIXEL **image_gy;
		image_gx = application_matrice(image, longueur, hauteur, matrice_1);
		image_gy = application_matrice(image, longueur, hauteur, matrice_2);
		for (z = 0; z < size; z++)
		{
			if (i == longueur)
			{
				i = 0;
				j += 1;
			}
			image[z].red = sqrt((image_gx[i][j].red*image_gx[i][j].red) + (image_gy[i][j].red*image_gy[i][j].red));
			image[z].green = sqrt((image_gx[i][j].green*image_gx[i][j].green) + (image_gy[i][j].green*image_gy[i][j].green));
			image[z].blue = sqrt((image_gx[i][j].blue*image_gx[i][j].blue) + (image_gy[i][j].blue*image_gy[i][j].blue));
			i++;
		}



		if (lenaBitmap)
		{
			saveBitmapFile("lena_sobel_2.bmp", lenaBitmap);
			destroyBitmapFile(lenaBitmap);
			destroyBitmapFile(lenaBitmap_t);
			printf("\nBye bye Lena.\n");
			system("pause");
		}
		else
		{
			printf("Echec.\n");
			system("pause");
		}
		return 0;
	}
}

