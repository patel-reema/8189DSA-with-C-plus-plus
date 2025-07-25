#include<iostream>
using namespace std;

int main(){
	int ar[]={5, 4, 3, 2, 1};
	int n = sizeof(ar) / sizeof(ar[0]);
	
	for(int i; i<n-1; i++){
		int minidx = i;
		
		for(int j = i+1; j<n; j++){
			if(ar[j] < ar[minidx]){
				minidx = j;
			}
		}
		
		if(minidx!=i){
			int s = ar[i];
			ar[i] = ar[minidx];
			ar[minidx] = s;
		}
	}
	
	for(int i=0; i<n; i++){
		cout<<" "<<ar[i];
	}
	
	
	
	return 0;
}
