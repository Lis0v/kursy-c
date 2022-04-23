#include <iostream>

using namespace std;

int main(){
	int pocz,kon,krok,suma=0;
	cout<<"Podaj poczatek zakresu:";
	cin>>pocz;
	cout<<"Podaj koniec zakresu:";
	cin>>kon;
	cout<<"Podaj krok:";
	cin>>krok;
	int i=pocz;
	while(i<=kon){
		suma+=i;//suma=suma+i;
		i+=krok;
	}
	cout<<"Suma liczb z przedzialu: "<<pocz<<" do "<<kon<<" wynosi: "<<suma<<endl;
	return 0;
}
