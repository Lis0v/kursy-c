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

	char id[11]="ID-Chiffre";
	char ber[6]="Beruf";
	char sor[11]="Arbeitsort";
	char ze[12]="Arbetszeit";
	char auf[9]="Aufgaben";
	char alt[6]="Alter";
	char beg[7]="Beginn";
	char ver[10]="Verdienst";
	char kon[8]="Kontakt";

	char *index[9]={id, ber, sor, ze, auf, alt, beg, ver, kon};

	for(int i=0;i<9;i++)
	{
		printf("%s: ", index[i]);
		fgets(parametry[i], 100, stdin);
	}

	FILE *f = fopen("Anzeige.txt", "w");

	for(int j=0;j<9;j++)
	fprintf(f, "%s: %s\n", index[j], parametry[j]);

	fclose(f);
}
