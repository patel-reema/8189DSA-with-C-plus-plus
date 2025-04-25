#include<iostream>
using namespace std;

main(){
	int a, b, c;
	
	cout<<"Enter the value of A:";
	cin>>a;
	cout<<"Enter the value of B:";
	cin>>b;
	cout<<"Enter the value of C:";
	cin>>c;
	
	(a==b && a==c)?cout<<"All are same": (a>b) ?  (a>c)  ?cout<<"A is max":cout<<"C is max"  :(b>c)  ?cout<<"B is max":cout<<"C is max";
		  
}
