#include<iostream>
using namespace std;

main(){
	int i, n;
	
	cout<<"Enter the size of Array: ";
	cin>>n;
	
	int a[n], index, val;
	
	for(i=0; i<n; i++){
		cin>>a[i];
	}
	cout<<"Enter index: ";
	cin>>index;
	cout<<"Enter the value of index: ";
	cin>>val;

	a[index]=val;
	
	for(i=0; i<n; i++){
		cout<<" "<<a[i];
	}
}
