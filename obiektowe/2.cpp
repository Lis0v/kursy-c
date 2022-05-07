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
	strcpy(this->marka,ma);
	strcpy(this->model,mo);
	this->rocznik=r;
	pojemnosc=poj;
	przyspieszenie=prz;
	spalanie=sp;
	strcpy(kolor,ko);
	cena=c;
	cout<<"\nPełna zawartość: Marka:"<<marka<<"\tmodel:"<<model<<"\trocznik:"<<rocznik<<endl;
	cout<<"Pojemność:"<<pojemnosc<<"\t przyspieszenie:"<<przyspieszenie<<"\tspalanie (1):"<<"\t"<<spalanie;
	cout<<"Kolor:"<<kolor<<"\tcena auta:"<<cena<<".To wszystko.";
}
wzorzec_auta::wzorzec_auta(int rok)
{
	rocznik=rok;
	cout<<"Uruchomiony konstruktor pierwszy dla obiektu:"<<rok<<endl;
}
wzorzec_auta::wzorzec_auta(int rok,int sp)
{
	rocznik=rok;
	spalanie=sp;
	cout<<"Uruchomiony konstruktor drugi dla obiektu:"<<spalanie<<"1.Rocznik prod="<<rocznik<<endl;
}
wzorzec_auta::wzorzec_auta(char *opis,int rok,int sp)
{
	strcpy(marka,opis);
	rocznik=rok;
	spalanie=sp;
	cout<<"Uruchomiony konstruktor trzeci dla obiektu:"<<spalanie<<" 1.Rocznik prod="<<rocznik<<endl;
	cout<<"Marka:"<<marka;
}
void wzorzec_auta::add_auto()
{
	cout<<"WPROWADŹ DANE AUTA:"<<endl;
	cout<<"Podaj markę auta: ";
	cin>>this->marka;
	cout<<"Podaj model auta: ";
	cin>>this->model;
	cout<<"Podaj rocznik auta: ";
	cin>>this->rocznik;
	cout<<"Podaj pojemność silnika (cm3): ";
	cin>>this->pojemnosc;
	cout<<"Podaj wartość przyspieszenia od 0 do 100km/h (s): ";
	cin>>this->przyspieszenie;

