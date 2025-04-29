#include<iostream>
using namespace std;

main(){
	int n1, i, n2;
	
	cout<<"Enter the number 1:";
	cin>>n1;
	cout<<"Enter the number 2:";
	cin>>n2;
	
	for(i=1; i<=n1 && i<=n2; i++){
		if(n1/i && n2/i){
			cout<<"The GCD or HCF:";
		}
	}
}
