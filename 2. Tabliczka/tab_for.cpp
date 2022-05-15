#include <iostream>
using namespace std;

int main(){
	int wiersz,kolumna;
	cout<<"Podaj liczbę wierszy:";
		cin>>wiersz;
	cout<<"Podaj liczbę kolumn:";
		cin>>kolumna;

	for(int i=1;i<=wiersz;i++){
		for(int j=1;j<=kolumna;j++){
                cout<<i*j<<"\t";
		}
		cout<<"\n";	
	}
	return 0;
}
