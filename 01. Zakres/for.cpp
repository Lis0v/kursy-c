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
	for(int i=pocz;i<=kon;i+=krok){
		suma+=i;//suma=suma+i;
	}
	cout<<"Suma liczb z przedzialu: "<<pocz<<" do "<<kon<<" wynosi: "<<suma<<endl;
	return 0;
}
