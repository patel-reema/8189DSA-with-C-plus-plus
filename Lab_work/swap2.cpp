#include<iostream>
using namespace std;

main(){
	int a, b;
	
	cout<<"Enter the value of A:";
	cin>>a;
	cout<<"Enter the value of B:";
	cin>>b;
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	cout<<"Swap value A:"<<a<<endl;
	cout<<"Swap value B:"<<b;
}
