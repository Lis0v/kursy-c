#include <iostream>
using namespace std;

int main(){
	int tablica[10];
	//tablica[0],tablica[1],tablica[2]...,tablica[9]
	cout<<"Uzupełniamy ręcznie elementy tablicy"<<endl;
	for(int i=0;i<10;i++){
		cout<<"tablica["<<i<<"]=";
		cin>>tablica[i];
	}
	return 0;
}
