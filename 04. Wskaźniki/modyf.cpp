#include <iostream>
using namespace std;

void modyfikacja(int *,int *,int *);
int main(){

	int a=5,b=10,c=15;
	modyfikacja(&a,&b,&c);
	cout<<"a="<<a<<" b="<<b<<" c="<<c;
	return 0;
}

void modyfikacja(int *x,int *y,int *z)
{
	*x+=100;
	*y+=100;
	*z+=100;
}
