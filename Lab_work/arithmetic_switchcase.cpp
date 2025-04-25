#include<iostream>
using namespace std;

main(){
	int a, b, c;
	
	cout<<"Enter the first number:";
	cin>>a;
	cout<<"Enter the second number:";
	cin>>b;
	cout<<"Enter the Arithmetic value number:";
	cin>>c;
	
	switch(c){
		case 1:
			cout<<"Addition:"<<a+b;
			break;
		case 2:
			cout<<"Substraction:"<<a-b;
			break;
		case 3:
			cout<<"Multiplication:"<<a*b;
			break;
		case 4:
			cout<<"Division:"<<a/b;
			break;
		case 5:
			cout<<"Modulo:"<<a%b;
			break;
	}
	
}
