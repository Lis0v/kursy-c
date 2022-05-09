#include <iostream>
#include <cstring>
using namespace std;

class stacje2
{
	float km;
	int glebokosc;
	char nazwa[20];
	char przesiadki[20];
	public:
	stacje2(float kk,int gg,char *nn,char *pp="");
	stacje2();
	void donde_estamos();
};
stacje2::stacje2(float kk,int gg,char *nn, char*pp):km(km),glebokosc(gg)
{
	strcpy(nazwa,nn);
	strcpy(przesiadki,pp);
}
stacje2::stacje2()
{
	km=0;
	glebokosc=0;
	strcpy(nazwa,"Jakaś nazwa");
	przesiadki[0]=NULL;
}
void stacje2::donde_estamos()
{
	cout<<"Stacja: "<<nazwa<<endl;
	if(przesiadki[0])
		cout<<"\tPrzesiadki: "<<przesiadki<<endl;
}

int main()
{
	stacje2 ostatnia=stacje2(22,0,"Warszawa-Zachodnia","Linia 120");
	ostatnia.donde_estamos();
	cout<<"******************************\n";
	const int ile_stacji=5;
	stacje2 przystanek[ile_stacji]={stacje2(0,5,"Warszawa-Wschodnia","Linia 150"),stacje2(),stacje2(),stacje2(8,5,"Warszawa-Główna","Linia 200"),stacje2(23,3,"Warszawa-Grochów","Linia 289")
	};
	for(int i=0;i<ile_stacji;i++)
		przystanek[i].donde_estamos();

			return 0;
}
