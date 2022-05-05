#include <iostream>
using namespace std;

int main(){
	
	int a=5,b=10,*wsk1,*wsk2;
	wsk1=&a;
	cout<<"Zmienna a="<<a<<" b="<<b<<" zmienna pokazywana przez wskaźnik="<<*wsk1;
	(*wsk1)++;
	cout<<"\nZmienna a="<<a<<" b="<<b<<" zmienna pokazywana przez wskaźnik="<<*wsk1;
	wsk1=&b;
	cout<<"\nZmienna a="<<a<<" b="<<b<<" zmienna pokazywana przez wskaźnik="<<*wsk1;	
	(*wsk1)++;
	cout<<"\nZmienna a="<<a<<" b="<<b<<" zmienna pokazywana przez wskaźnik="<<*wsk1;
	b+=100;
	cout<<"\nZmienna a="<<a<<" b="<<b<<" zmienna pokazywana przez wskaźnik="<<*wsk1;
	wsk1=&a;
	wsk2=&b;
	cout<<"\nZmienna a="<<a<<" b="<<b<<" zmienna pokazywana przez wskaźnik="<<*wsk1<<" adres "<<wsk1;
	cout<<"\nZmienna a="<<a<<" b="<<b<<" zmienna pokazywana przez wskaźnik="<<*wsk2<<" adres "<<wsk2;
	cout<<"\n";
	return 0;
}
