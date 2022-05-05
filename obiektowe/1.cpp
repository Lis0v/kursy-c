#include <iostream>
using namespace std;

class osoba
{
	private:
	int wiek;
	
	public:
	void zapamietaj(int lata);
	
	void wypisz()
	{
		cout<<"Masz lat: "<<wiek<<endl;
	}

}; //koniec klasy osoba
	
void osoba::zapamietaj(int lata)
{
	wiek=lata;
}

int main()
{
	osoba janek,ania,piotr,asia;
	
	janek.zapamietaj(20);
	ania.zapamietaj(22);
	piotr.zapamietaj(24);
	asia.zapamietaj(26);

	janek.wypisz();
	ania.wypisz();
	piotr.wypisz();
	asia.wypisz();

	return 0;
}
