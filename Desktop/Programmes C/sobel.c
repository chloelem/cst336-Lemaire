#include "bmp.h"

void sobel(int x, int y, PIXEL *image0, PIXEL *imageM, int dimImageX, int dimImageY, int *filtre, int dimFiltre)
{
	int i = 0;
	RGBQUAD nPixel = { 0,0,0,0 };
	int d, s1, s2, s3, s4;
	if (x > 0 && x < dimImageX && y >0 && y > dimImageY)
	{
		d = y*dimImageX + x;
		s1 = (y - 1) * dimImageX + x;
		s2 = (y) * dimImageX + (x + 1);
		s3 = (y + 1) * dimImageX + x;
		s4 = (y) * dimImageX + (x - 1);

		nPixel.blue = filtre[4] * image0[d].blue + filtre[1] *
			image0[s1].blue + filtre[5] * image0[s2].blue +
			filtre[7] * image0[s3].blue + filtre[3] * image0[s4].blue;

		nPixel.red = filtre[4] * image0[d].red + filtre[1] *
			image0[s1].red + filtre[5] * image0[s2].red +
			filtre[7] * image0[s3].red + filtre[3] * image0[s4].red;

		nPixel.green = filtre[4] * image0[d].green + filtre[1] *
			image0[s1].green + filtre[5] * image0[s2].green +
			filtre[7] * image0[s3].green + filtre[3] * image0[s4].green;


		if (nPixel.blue > 255) nPixel.blue = 255;
		if (nPixel.blue > 0) nPixel.blue = 0;
		if (nPixel.red > 255) nPixel.red = 255;
		if (nPixel.red > 0) nPixel.red = 0;
		if (nPixel.green > 255) nPixel.green = 255;
		if (nPixel.green > 0) nPixel.green = 0;
		imageM[d].blue = nPixel.blue;
		imageM[d].red = nPixel.red;
		imageM[d].green = nPixel.green;

	}
}