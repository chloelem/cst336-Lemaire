#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable : 4996)  // pour visual studio

unsigned long get_key(const char* word) 
{
	unsigned long i, sum = 0;
	for (i = 0; i < strlen(word); i++)
			sum += word[i];
	return sum;
}

int main(int argc, char * argv[])
{
	if (argc > 3)
	{
		FILE *file_in = fopen (argv[1], "rb");
		if (file_in)
		{
			char c;
			unsigned long size = 0;
			while (fread(&c, sizeof(char), 1, file_in) )
				size++;
			fseek(file_in, (get_key (argv[2]) * get_key (argv[3])) % size, SEEK_SET);
			fread(&c, sizeof(char), 1, file_in);
			printf("Code : %d\n", c);
		}
	}
	else
		printf("Usage : Executer en ligne de commande avec pour arguments le nom du fichier de validation, le num""\x82""ro de la question suivis de la r""\x82""ponse.\n");
	printf ("Appuyez sur Entr""\x82""e pour terminer.");
	getchar ();
	return EXIT_SUCCESS;
}
