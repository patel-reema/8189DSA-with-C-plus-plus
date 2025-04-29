#include<iostream>
using namespace std;

main(){
	int n, d, sum=0, i;
	
	cout<<"Enter the digits:";
	cin>>n;
	
	for(i=1; n!=0; i++){
		d=n%10;
		sum=sum+d;
		n=n/10;
	}
	cout<<"Sum of digit:"<<sum;
}
