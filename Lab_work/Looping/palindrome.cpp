#include<iostream>
using namespace std;

main(){
	int n, num, d, r=0, i;
	
	cout<<"Enter the digits:";
	cin>>n;
	num=n;
	
	for(i=1; n!=0; i++){
		d=n%10;
		r=r*10+d;
		n=n/10;
	}
	
	if(r==num){
		cout<<"This number is Palindrome.";
	}
	else{
		cout<<"This number is not Palindrome.";
	}


}

