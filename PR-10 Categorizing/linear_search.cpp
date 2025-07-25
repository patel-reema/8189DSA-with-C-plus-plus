#include<iostream>
using namespace std;

int linearSearch(int ar[], int n, int tget){
	for(int i=0; i < n; i++){
		if (ar[i] == tget) {
			return i;
		}
	}
	return -1;
}

int main(){
	int ar[]={6, 7, 3, 2, 4};
	int tget = 7;
	
	int n = sizeof(ar) / sizeof(ar[0]);
	
	int r = linearSearch(ar, n, tget);
	if (r != -1){
		cout<<"Element found at index: "<<r<<endl;
	}
	else{
		cout<<"...Element not found..."<<endl;
	}
	
	return 0;
}
