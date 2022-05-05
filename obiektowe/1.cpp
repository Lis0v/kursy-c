#include <iostream>
using namespace std;

int main()
{
	class osoba
	{
		private:
		char nazwisko[20];
		int wiek;
		public:
		void zapamietaj(char *napis, int lata);
		void wypisz()
		{
			cout<<"Nazwisko:"<<nazwisko<<", lat:"<<wiek<<endl;
		}

	};
	osoba janek,ania,piotr,asia;
	int a,b,c,d;
	return 0;
}
