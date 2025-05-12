#include<iostream>
using namespace std;

main(){
	int n, i, sum=0;
	
	cout<<"Enter the number of digits:";
	cin>>n;
	
	i=n%10;
	
	while(n>=10){
		n=n/10;
	}
	
	sum=i+n;
	
	cout<<"Sum of first and last digit:"<<sum;
}
