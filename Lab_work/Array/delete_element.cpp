#include<iostream>
using namespace std;

main(){
	int i, n;
	
	cout<<"Enter the size of Array: ";
	cin>>n;
	
	int a[n], index;
	
	for(i=0; i<n; i++){
		cin>>a[i];
	}
	cout<<"Enter index: ";
	cin>>index;
	
	for(i=index; i<n; i++){
		a[i]=a[i+1];
	}
	n--;
	
	for(i=0; i<n; i++){
		cout<<" "<<a[i];
	}
}
