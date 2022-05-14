#include <stdio.h>

int main()
{
	int *wsk;

	char chiffre[10];
	char beruf[20];
	char sort[40];
	char zeit[40];
	char aufgaben[100];
	char alter[5];
	char beginn[20];
	char verdienst[20];
	char kontakt[50];

	char *parametry[9]={chiffre, beruf, sort, zeit, aufgaben, alter, beginn, verdienst, kontakt};

	char *index[9]={"ID-Chiffre", "Beruf", "Arbeitsort", "Arbeitszeit", "Aufgaben", "Alter", "Beginn", "Verdienst", "Kontakt"};

	for(int i=0;i<9;i++)
	{
		printf("%s: ", index[i]);
		fgets(parametry[i], 100, stdin);
	}

	FILE *f = fopen("Anzeige.txt", "w");

	for(int j=0;j<9;j++)
	fprintf(f, "%s: %s", index[j], parametry[j]);

	fclose(f);
}
