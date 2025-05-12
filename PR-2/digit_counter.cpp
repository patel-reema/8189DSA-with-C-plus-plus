#include<iostream>
using namespace std;

main(){
	int n, i=0;
	
	cout<<"Enter the number of digits:";
	cin>>n;
	
	while(n!=0){
		n=n/10;
		i++;
	}
	
	cout<<"Total digits:"<<i;
}
