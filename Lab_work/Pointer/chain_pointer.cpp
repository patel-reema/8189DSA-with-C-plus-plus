#include<iostream>
using namespace std;

main(){
	int x;
	cout<<"Enter X value: ";
	cin>>x;
	
	int *ptr= &x;
	int **pptr = &ptr;
	
	cout <<"Value: "<<x<<endl;
	cout <<"Using *ptr: "<<*ptr<<endl;
	cout <<"Using **pptr: "<<**pptr<<endl;
}
