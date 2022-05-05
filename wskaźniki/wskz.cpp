#include <iostream>
using namespace std;

int main() {
	int zm1,zm2,*wsk;
	cout<<"Podaj pierwszą zmienną: ";
	cin>>zm1;
	cout<<"Podaj drugą zmienną: ";
	cin>>zm2;
	wsk=&zm1;
	cout<<"Zmienna I = "<<zm1<<"\nZmienna II = "<<zm2<<"\nZmienna pokazywana przez wskaźnik: "<<*wsk<<"\n";
	(*wsk)++;
	cout<<"Zmienna I = "<<zm1<<"\nZmienna II = "<<zm2<<"\nZmienna pokazywana przez wskaźnik: "<<*wsk<<"\n";
	return 0;
}
