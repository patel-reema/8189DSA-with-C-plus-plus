#include<iostream>
using namespace std;

main(){
	int n, n1=0, n2=1, n3, i;
	
	cout<<"Enter the number:";
	cin>>n;
	
	cout<<n1<<" "<<n2<<" ;
	
	for(i=2; i<=n; i++){
		 n3=n1+n2;
		 cout<<n3<<" ";
		 n1=n2;
		 n2=n3;
	}
}

