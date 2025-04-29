#include<iostream>
using namespace std;

main(){
	int n, d, r=0, i;
	
	cout<<"Enter the digits:";
	cin>>n;
	
	for(i=1; n!=0; i++){
		d=n%10;
		r=r*10+d;
		n=n/10;
	}
	cout<<"Reverse digit:"<<r;
}

