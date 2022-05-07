#include <iostream>
using namespace std;

float s(float a, float b)
{
    float wynik=1;
    wynik=a+b;
    return wynik;
}

int main()
{	
	float l1,l2;
	float wyn;
	cout << "Podaj pierwszą liczbę ";
	cin>>l1;
	cout << "Podaj drugą liczbę ";
	cin>>l2;
	wyn=s(l1,l2);

	cout<<"Suma liczb "<<l1<<" i "<<l2<<" wynosi "<<wyn;
	
	cout<<"\nJesteśmy z powrotem w funkcji głównej main.\n";

	return 0;
}
