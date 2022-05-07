#include <iostream>
#include <cstring>
using namespace std;

class wzorzec_auta
{
	private:
		char marka[20];
		char model[20];
		int rocznik;
		float pojemnosc;
		float przyspieszenie;
		float spalanie;
		char kolor[20];
		int cena;

	public:
		wzorzec_auta(char *ma,char *mo,int r,float poj, float prz,float sp,char *ko,int c);
		wzorzec_auta(int rok);
		wzorzec_auta(int rok,int sp);
		wzorzec_auta(char *opis,int rok, int sp);
		void add_auto();
		void view_auto();
};
wzorzec_auta::wzorzec_auta(char *ma,char *mo,int r,float poj,float prz,float sp,char *ko,int c)
{
	strcpy(marka,ma);
