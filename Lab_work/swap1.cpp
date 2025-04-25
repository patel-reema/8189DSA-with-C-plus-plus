#include<iostream>
using namespace std;

main(){
	int a, b, c;
	
	cout<<"Enter the value of A:";
	cin>>a;
	cout<<"Enter the value of B:";
	cin>>b;
	
	c=a;
	a=b;
	b=c;
	
	cout<<"Swap value A:"<<a<<endl;
	cout<<"Swap value B:"<<b;
}
