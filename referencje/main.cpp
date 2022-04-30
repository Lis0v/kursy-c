#include <iostream>
using namespace std;

void wart_ref(int x,int &y);

int main(){

	int a,b;
	cout<<"Podaj wartość zmiennej a: ";
	cin>>a;
	cout<<"Podaj wartość zmiennej b: ";
	cin>>b;
	cout<<"Wypisujemy a = "<<a<<" oraz b = "<<b;
	wart_ref(a,b);

	return 0;
}

//definicja funkcji o nazwie wart_ref
void wart_ref(int x, int &y){
	cout<<"A teraz z funkcji x = "<<x<<" y = "<<y;
	x=100*x; //x*=100
	y=200*y; //y*=200
	cout<<"Ponownie w funkcji x = "<<x<<" oraz y = "<<y;
}
