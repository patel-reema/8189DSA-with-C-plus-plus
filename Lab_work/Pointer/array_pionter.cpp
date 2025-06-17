#include<iostream>
using namespace std;

main(){
	int a, b, c;
	cout<<"Enter A: ";
	cin>>a;
	cout<<"Enter B: ";
	cin>>b;
	cout<<"Enter C: ";
	cin>>c;
	
	int *arr[3], i;
	arr[0]=&a;
	arr[1]=&b;
	arr[2]=&c;
	
	for(i=0; i<5; i++){
		cout<<*arr[i]<<" ";
	}
}
