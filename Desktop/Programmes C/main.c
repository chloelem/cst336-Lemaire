#include <stdio.h>
#include "bmp.h"

int main(void)
{
    BITMAP * const lenaBitmap = loadBitmapFile("lena_256_color.bmp");
    if (lenaBitmap->infoHeader.bits == 24 && !lenaBitmap->palette)
    {
        PIXEL * const image = (PIXEL *)lenaBitmap->raster;
        const unsigned int size = lenaBitmap->infoHeader.height * lenaBitmap->infoHeader.width;
        unsigned int i;
        for (i = 0 ; i < size; i++)
            image[i].blue = 0;
    }
    if (lenaBitmap)
    {
        saveBitmapFile("lena_sans_bleu.bmp", lenaBitmap);
        destroyBitmapFile(lenaBitmap);
        printf("Bye bye Lena.\n");
    }
    else
        printf("Echec.\n");
    return 0;
}

