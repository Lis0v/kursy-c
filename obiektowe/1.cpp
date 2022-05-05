#include <iostream>
using namespace std;

int main()
{
	class osoba
	{
		private:
		int wiek;
		public:
		void zapamietaj(int lata);
		void wypisz()
		{
			cout<<"Masz lat:"<<wiek<<endl;
		}

	};
	osoba janek,ania,piotr,asia;
	int a,b,c,d;
	return 0;
}
