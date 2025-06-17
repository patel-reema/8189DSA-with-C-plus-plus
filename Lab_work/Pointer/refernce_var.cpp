#include<iostream>
using namespace std;

void reference(int x);

void reference(int x){
	x=x+1;
	cout<<"Before Value: "<<x<<endl;
}

main(){
	int a=5;
	reference(a);
	cout<<"After Value: "<<a;
}
