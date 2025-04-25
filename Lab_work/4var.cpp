#include<iostream>
using namespace std;

main(){
	int a, b, c, d;
	
	cout<<"Enter the value of A:";
	cin>>a;
	cout<<"Enter the value of B:";
	cin>>b;
	cout<<"Enter the value of C:";
	cin>>c;
	cout<<"Enter the value of D:";
	cin>>d;
	
	if(a==b && a==c && a==d){
		cout<<"All are same";
	}else{
		if(a>b){
			if(a>c){
				if(a>d){
					cout<<"A is max";
				}else{
					cout<<"D is max";
				}
			}else{
				cout<<"C is max";
			}
		}else{
			if(b>c){
				if(b>d){
					cout<<"B is max";
				}else{
					cout<<"D is max";
				}
			}else{
				if(c>d){
					cout<<"C is max";
				}else{
					cout<<"D is max";
				}
			}
		}
	}
}
