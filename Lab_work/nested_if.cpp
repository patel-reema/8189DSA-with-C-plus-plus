#include <iostream>
using namespace std;

main(){
	int a, b;
	
	cout<<"Enter the value of A:";
	cin>>a;
	cout<<"Enter the value of B:";
	cin>>b;
	
	if(a>b){
		cout<<"A is max";
	}else{
		if(a==b){
			cout<<"Both are same";
		}
		else{
			cout<<"B is max";
		}
	}
}
