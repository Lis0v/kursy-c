#include <iostream>
using namespace std;

int main(){
	int wiersz,kolumna;
	cout<<"Podaj liczbę wierszy:";
		cin>>wiersz;
	cout<<"Podaj liczbę kolumn:";
		cin>>kolumna;
        
	int i=1;
	while(i<=wiersz){
		int j=1;
		while(j<=kolumna){
                cout<<i*j<<"\t";
		j++;
		}
		cout<<"\n";
		i++;
	}
	return 0;
}
