#include <iostream>
using namespace std;

int main(){
	
	char *miasto[]={"Warszawa","Kraków","Nowy Sącz","Limanowa","Gorlice"};
	char *abc[3];
	int i;
	for(i=0;i<6;i++)
		cout<<"Miasto:"<<miasto[i]<<endl;
	abc[0]=miasto[2];
	abc[1]=miasto[4];
	abc[2]="Dowolny tekst.";
	cout<<"Trzy elementy tablicy znakowej:\n"<<abc[0]<<","<<abc[1]<<","<<abc[2]<<endl;
	return 0;
}
