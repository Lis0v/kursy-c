#include <iostream>
using namespace std;

int main(){

	int tablica[10]={2,6,4,-90,5,45,9,34,100},*wsk;
	wsk=tablica; //wsk=&tablica[0];
	
	for(int i=0;i<10;i++){
	
		cout<<(*wsk)<<"\t";
		wsk++;
	}

	return 0;
}
