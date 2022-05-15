#include <iostream>
using namespace std;

int main(){

	int *wsk1,*wsk2;
	wsk1=new int;
	wsk2=new int;

	cout<<"Ile elementów ma posiadać tablica:";
	int rozmiar;
	cin>>rozmiar;
	int *tab=new int[rozmiar];
	*tab=20; //tab[0]=20 wpisanie do zerowego elemetu tablcy wartosci 20
	*(tab+5)=200; //tab[5]=200
	cout<<tab[0]<<"\t"<<tab[5];
	delete [] tab;
	return 0;
}
