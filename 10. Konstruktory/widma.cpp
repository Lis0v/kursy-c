#include <iostream>
#include <cstring>
using namespace::std;

class kalibracja
{
	float a,b;
	char nazwa[20];
	public:
	kalibracja(float wsp_a,float wsp_b, char *txt); //konstruktor

	kalibracja(kalibracja &wzor); //deklaracja konstruktora kopiującego

	float energia(int kanal)
	{
		return ((a*kanal)+b);
	}
	char *opis()
	{
		return nazwa;
	}
};

kalibracja::kalibracja(float wsp_a,float wsp_b,char *txt):a(wsp_a),b(wsp_b)
{
	strcpy(nazwa,txt);
}

kalibracja::kalibracja(kalibracja &wzorzec)
{
	this->a=wzorzec.a;
	this->b=wzorzec.b;
	strcpy(nazwa,"Konstruktor kopiujący.");
}

void fun_pierwsza(kalibracja odebrana);

kalibracja fun_druga(void);

int main()
{
	kalibracja kobalt(1.05,2.5,"Kobalt ");
	kalibracja europ(kobalt); //float a=5.45
	//kalibracja europ=kalibracja(kobalt); float kopia1=float(a)
	//kalibracja europ=kobalt; float kopia2=a;
	
	cout<<"O który kanał widma chodzi?: ";
	int kanal;
	cin>>kanal;
	cout<<"\nWedług kalibracji kobalt, \nopisanej jako "<<kobalt.opis()<<"\nkanałowi nr "
		<<kanal<<" odpowiada energia "<<kobalt.energia(kanal)<<endl;
	
	cout<<"\nWedług kalibracji europ, \nopisanej jako "<<europ.opis()<<"\nkanałowi nr "
		<<kanal<<" odpowiada energia "<<europ.energia(kanal)<<endl;
	
	cout<<"\nDo funkcji pierwszej wysyłam kalibrację "<<kobalt.opis()<<endl;
	fun_pierwsza(kobalt);
	
	cout<<"\nTeraz funkcja druga, a jej rezultat umieszczamy w innej kalibracji\n";
	cout<<"Obiekt chwilowy zwrócony jako rezultat funkcji posiada opis "<<(fun_druga()).opis()<<endl;
	
	return 0;
}

void fun_pierwsza(kalibracja odebrana)
{
	cout<<"W funkcji pierwszej odebrano kalibrację opisaną jako "<<odebrana.opis()<<endl;
}

kalibracja fun_druga(void)
{
	kalibracja wewn(2,1,"WEWNĘTRZNA");
	cout<<"W funkcji fun_druga kalibracja ma opis: "<<wewn.opis()<<endl;
	return wewn;
}
