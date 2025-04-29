#include<iostream>
using namespace std;

main(){
	
	int n, i, fact=1;
	cout<<"Enter the number:";
	cin>>n;
	
	for(i=1; i<=n; i++){
		cout<<" "<<i;
		fact=fact*i;
	}
	cout<<endl;
	cout<<"Factorial number :"<<fact;
}
