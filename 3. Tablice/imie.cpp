#include <iostream>
using namespace std;

int main()
{
	string imie;
	cout<<"Podaj swoje imię: ";
	cin>>imie;
	cout<<"Buchstabieren Sie bitte: "<<endl;
	for(int i=0;i<imie.length();i++)
	{
		cout<<"Litera "<<i+1<<" to:"<<imie[i]<<endl;
	}
	return 0;
}
