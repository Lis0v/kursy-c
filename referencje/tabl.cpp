#include <iostream>
using namespace std;

void fun_tab(int tab[]); //deklaracja funkcji

int main(){

	int rozmiar;
	cout<<"Podaj rozmiar tablicy: ";
	cin>>rozmiar;
	
	int tablica[rozmiar];
	cout<<"Uzupełniamy automatycznie tablicę: ";
	for(int i=0;i<rozmiar;i++)
		tablica[i]=i*10;
	fun_tab();

	return 0;
}

//definicja funkcji o nazwie wart_ref
void wart_ref(int x, int &y){
	cout<<"\nA teraz z funkcji x = "<<x<<" y = "<<y;
	x=100*x; //x*=100
	y=200*y; //y*=200
	cout<<"\nPonownie w funkcji x = "<<x<<" oraz y = "<<y;
}
