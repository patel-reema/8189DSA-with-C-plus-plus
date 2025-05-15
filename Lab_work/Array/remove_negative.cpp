#include<iostream>
using namespace std;

main(){
	int i, n;
	
	cout<<"Enter the size of array: ";
	cin>>n;
	
	int a[n];
	for(i=0; i<n; i++){
		cin>>a[i];
	}
	for(i=0; i<n; i++){
		if(a[i]>0){
			cout<<" "<<a[i];
		}
	}
	cout<<endl;
}
