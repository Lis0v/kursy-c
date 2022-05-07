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
	cout<<"Podaj spalanie auta (l): ";
	cin>>this->spalanie;
	cout<<"Podaj kolor samochodu: ";
	cin>>this->kolor;
	cout<<"Podaj cenę samochodu: ";
	cin>>this->cena;
}

void wzorzec_auta::view_auto()
{
	cout<<endl<<"Twoje auto to: "<<endl<<endl;
	cout<<"Marka auta: "<<this->marka<<endl<<"Model: "<<this->model<<endl;
	cout<<"Rocznik twojego auta: "<<this->rocznik<<endl;
	cout<<"Pojemność twojego auta: "<<this->pojemnosc<<" cm3"<<endl;
	cout<<"Przyspieszenie twojego auta: "<<this->przyspieszenie<<" s"<<endl;
	cout<<"Spalanie twojego auta: "<<this->spalanie<<" l"<<endl;
	cout<<"Kolor twojego auta to:"<<this->kolor<<"."<<endl;
	cout<<"cena auta wynosi "<<this->cena<<endl;
}
int main()
{
	wzorzec_auta auto1(1999),auto2(2000,8),auto3(2006),auto4("Fiat",2001,10);//int a=8.b;
	wzorzec_auta auto5("BMW","X3",2000,3000,5,10,"biały",150000);
	/*auto1.add_auto();
	 * auto1.view_auto();
	 * auto2.add_auto();
	 * auto2.view_auto();
	 */

	return 0;
}
