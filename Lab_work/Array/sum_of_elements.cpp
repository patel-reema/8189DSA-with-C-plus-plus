#include<iostream>
using namespace std;

main(){
	int i, n;
	
	cout<<"Enter the size of array: ";
	cin>>n;
	
	int a[n], sum=0;
	for(i=0; i<n; i++){
		cin>>a[i];
	}
	for(i=0; i<n; i++){
		cout<<" "<<a[i];
	}
	cout<<endl;
	
	for(i=0; i<n; i++){
		sum=sum+a[i];
	}
	
	cout<<"Sum of elements : "<<sum;
	cout<<endl;
}
