#include<iostream>
using namespace std;

void fibonacci(int n)
{    
     long long a = 0, b = 1;
  
     for(int i=0;i<n;i++)
     {
            cout<<b<<" ";
            b += a; //pod zmienną b przypisujemy wyraz następny czyli a+b
            a = b-a; //pod zmienną a przypisujemy wartość zmiennej b
     }     
}

int main()
{
    int n;
    
    cout<<"Podaj ile chcesz wypisać wyrazów ciągu fibonacciego: ";
    cin>>n;
    
    fibonacci(n);
    
    return 0;
}
