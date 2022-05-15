#include <iostream>
using namespace std;

int main()
{
	string tekst;
	char znak;
	int licznik=0;

	cout<<"Podaj dowolny tekst: ";
	cin>>tekst;

	cout<<"Podaj dowolny znak: ";
	cin>>znak;

	for(int i=0;i<tekst.length();i++)
	{
		if(tekst[i]==znak)
			licznik++;
	}

	cout<<"W tekście "<<tekst<<" litera "<<znak<<" występuje "<<licznik<<" razy.\n";

	return 0;
}
