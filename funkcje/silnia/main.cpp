#include <iostream>
using namespace std;

int silnia(int a)
{
    int wynik=1;
    for(int i=1;i<= a;i++)
	wynik *= i;
    return wynik;
}

int main()
{	
	int liczba;
	cout << "Podaj dowolną liczbę: ";
	cin>>liczba;
	
	silnia(liczba);
	cout<<"Silnia liczby "<<liczba<<" wynosi "<<silnia(liczba);
	
	cout<<"\nJesteśmy z powrotem w funkcji głównej main.\n";

	return 0;
}
