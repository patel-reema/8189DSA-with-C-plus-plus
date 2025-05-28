#include<iostream>
using namespace std;

int add(int a, int b){
	return a + b;
}

int sub(int a, int b){
	return a - b;
}

int mul(int a, int b){
	return a * b;
}

float div(float c , float d){
	return c / d;
}

int mol(int a, int b){
	return a % b;
}

main(){
	
	int no, a, b;
	float c, d;
	
	cout<<"Enter 1 to add numbers.."<<endl;
	cout<<"Enter 2 to substract numbers.."<<endl;
	cout<<"Enter 3 to multiply numbers.."<<endl;
	cout<<"Enter 4 to divide numbers.."<<endl;
	cout<<"Enter 5 to module numbers.."<<endl;
	cout<<"Enter 6 to exit.."<<endl;
	cin>>no;
	
	
	do{
		switch(no){
		case 1:
			cout<<"Enter the first number:";
			cin>>a;
			cout<<"Enter the second number:";
			cin>>b;
			
			cout<<"Ans : "<<add(a , b)<<endl;
		break;
		case 2:
			cout<<"Enter the first number:";
			cin>>a;
			cout<<"Enter the second number:";
			cin>>b;
			
			cout<<"Ans : "<<sub(a , b)<<endl;
		break;
		case 3:
			cout<<"Enter the first number:";
			cin>>a;
			cout<<"Enter the second number:";
			cin>>b;
			
			cout<<"Ans : "<<mul(a , b)<<endl;
		break;
		case 4:
			cout<<"Enter the first number:";
			cin>>a;
			cout<<"Enter the second number:";
			cin>>b;
			
			cout<<"Ans : "<<div(c , d)<<endl;
		break;
		case 5:
			cout<<"Enter the first number:";
			cin>>a;
			cout<<"Enter the second number:";
			cin>>b;
			
			cout<<"Ans : "<<mol(a , b)<<endl;
		break;
		default:
			cout<<"Exit from Calculator"<<endl;
	}
	}while(no!=0);
}
