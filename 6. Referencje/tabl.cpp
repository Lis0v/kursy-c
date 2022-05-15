#include <iostream>
using namespace std;

void fun_tab(int [],int ); //deklaracja funkcji

int main(){

	int rozmiar;
	cout<<"Podaj rozmiar tablicy: ";
	cin>>rozmiar;
	
	int tabl[rozmiar];
	cout<<"Uzupełniamy automatycznie tablicę.";
	for(int i=0;i<rozmiar;i++)
		tabl[i]=i*10;

	fun_tab(&tabl[0],rozmiar);
	return 0;
	
	/* tablica=&tablica[0]
	nazwa tablicy jest adresem jej zerowego elementu */
}

//definicja funkcji o nazwie fun_tab
void fun_tab(int tab[],int rozm){
	cout<<"\nWyświetlamy w funkcji zawartość tablicy:";
	for(int i=0;i<rozm;i++)
		cout<<"\nElement["<<i<<"]="<<tab[i];
}
