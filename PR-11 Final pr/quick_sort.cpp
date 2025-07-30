#include<iostream>
using namespace std;

int part(int ar[], int low, int high){
	int i, j, tmp;
	int pt = ar[high];
	
	i = low - 1;
	
	for(j=low; j<high; j++){
		if(ar[j] < pt){
			i++;
			tmp = ar[i];
			ar[i] = ar[j];
			ar[j] = tmp;
		}
	}
	tmp = ar[i + 1];
	ar[i + 1] = ar[high];
	ar[high] = tmp;
	
	return i + 1;
}

void quick_Sort(int ar[], int low, int high){
	if(low < high){
		int v = part(ar, low, high);
		quick_Sort(ar, low, v - 1);
		quick_Sort(ar, v + 1, high);
	}
}

int main(){
	int ar[]={14, 23, 4, 20, 8, 2};
	
	int n = sizeof(ar) / sizeof(ar[0]);
	
	for(int i=0; i<n; i++){
		cout<<" "<<ar[i]<<endl;
	}
	cout<<"--------------"<<endl;
	quick_Sort(ar , 0 , n-1); 

	for(int i=0; i<n; i++){
		cout<<" "<<ar[i]<<endl;
	}
	return 0; 
}
