#include<iostream>
using namespace std;

main(){
	int i, size;
	cout<<"Enter the Size of array: ";
	cin>>size;
	
	int a[size];
	for(i=0; i<size; i++){
		cout<<"a["<<i<<"] : ";
		cin>>a[i];
	}
	for(i=0; i<size; i++){
		if(a[i]<0){
			cout<<" "<<a[i];
		}
	}
	cout<<endl;
}
