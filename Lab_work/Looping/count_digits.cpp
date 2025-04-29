#include<iostream>
using namespace std;

main(){
	int n, i;
	
	cout<<"Enter the digits:";
	cin>>n;
	
	for(i=0; n!=0; i++){
		n=n/10;
	}
	cout<<"Total digits:"<<i;
}
