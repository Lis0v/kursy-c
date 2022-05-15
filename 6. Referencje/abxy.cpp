#include <iostream>
using namespace std;

void wart_ref(int x,int &y); //deklaracja funkcji

int main(){

	int a,b;
	cout<<"Podaj wartość zmiennej a: ";
	cin>>a;
	cout<<"Podaj wartość zmiennej b: ";
	cin>>b;
	cout<<"\nWypisujemy a = "<<a<<" oraz b = "<<b;
	wart_ref(a,b);
	cout<<"\nWypisujemy po wywołaniu funkcji a = "<<a<<" oraz b = "<<b<<"\n";

	return 0;
}

//definicja funkcji o nazwie wart_ref
void wart_ref(int x, int &y){
	cout<<"\nA teraz z funkcji x = "<<x<<" y = "<<y;
	x=100*x; //x*=100
	y=200*y; //y*=200
	cout<<"\nPonownie w funkcji x = "<<x<<" oraz y = "<<y;
}
