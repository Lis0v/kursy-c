#include <iostream>
using namespace std;

void fun_tab(int tab[],int rozm); //deklaracja funkcji

int main(){

	int rozmiar;
	cout<<"Podaj rozmiar tablicy: ";
	cin>>rozmiar;
	
	int tablica[rozmiar];
	cout<<"Uzupełniamy automatycznie tablicę.";
	for(int i=0;i<rozmiar;i++)
		tablica[i]=i*10;
	fun_tab(tablica,rozmiar);
	return 0;
}

//definicja funkcji o nazwie wart_ref
void fun_tab(int tab[],int rozm){
	cout<<"\nWyświetlamy w funkcji zawartość tablicy:";
	for(int i=0;i<rozm;i++)
		cout<<"\nElement["<<i<<"]="<<tab[i];
}
