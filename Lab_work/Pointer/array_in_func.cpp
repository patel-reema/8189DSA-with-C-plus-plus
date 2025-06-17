#include<iostream>
using namespace std;

void arrFun(int a[], int size);

void arrFun(int a[], int size){
	int i;
	for(i=0; i<5; i++){
		if(a[i]!=0){
			cout<<" "<<a[i]<<endl;
		}
	}
}

main(){
	int a[]={10, 20, 30, 40, 50};
	arrFun(a,3);
}
