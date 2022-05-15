#include <iostream>
using namespace std;

int main(){
	int rozmiar;
	cout<<"Podaj rozmiar tablicy: ";
	cin>>rozmiar;

	int tablica[rozmiar];
	cout<<"Uzupełniamy ręcznie elementy tablicy: "<<endl;

	for(int i=0;i<rozmiar;i++)
	{
		cout<<"tab["<<i<<"]=";
		cin>>tablica[i];
	}
     	cout<<"Wyświetlamy elementy tablicy: ";

	for(int i=0;i<rozmiar;i++)
		cout<<tablica[i]<<"\t";
	return 0;
}
