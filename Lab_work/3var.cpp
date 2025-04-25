#include<iostream>
using namespace std;

main(){
	int a, b, c;
	
	cout<<"Enter the value of A:";
	cin>>a;
	cout<<"Enter the value of B:";
	cin>>b;
	cout<<"Enter the value of C:";
	cin>>c;
	
	if(a==b && a==c){
		cout<<"All are same";
	}else{
		if(a>b){
			if(a>c){
				cout<<"A is max";
			}else{
				cout<<"C is max";
			}
		}else{
			if(b>c){
				cout<<"B is max";
			}else{
				cout<<"C is max";
			}
		}
	}
}
