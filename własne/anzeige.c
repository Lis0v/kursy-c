#include <stdio.h>

int main(){
	char chiffre[10], beruf[20], sort[40], zeit[40], aufgaben[100], alter[5], beginn[20], verdienst[20], kontakt[50];
	char *parametry[9]={chiffre, beruf, sort, zeit, aufgaben, alter, beginn, verdienst, kontakt};
	char *index[9]={"ID-Chiffre", "Beruf", "Arbeitsort", "Arbeitszeit", "Aufgaben", "Alter", "Beginn", "Verdienst", "Kontakt"};

	for(int i=0;i<9;i++){
		printf("%s: ", index[i]);
		fgets(parametry[i], 100, stdin);
	}

	FILE *f = fopen("Anzeige.txt", "w");

	for(int j=0;j<9;j++)
		fprintf(f, "%s: %s", index[j], parametry[j]);
	fclose(f);
}
