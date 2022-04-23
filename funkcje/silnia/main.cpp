#include <iostream>
using namespace std;

void silnia(int a)
{
    int wynik = 1;
    for(int i = 1; i <= a; i++)
	wynik *= i;
	cout<<"Silnia liczby "<<a<<" wynosi "<<wynik<<endl;
}

int main()
{	
	int liczba;
	cout << "Podaj dowolną liczbę: ";
	cin>>liczba;
	silnia(liczba);
	return 0;
}
