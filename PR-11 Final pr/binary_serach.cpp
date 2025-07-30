#include<iostream>
using namespace std;

int binary_Search(int ar[], int n, int key){
	int low = 0, high = n-1;
	
	while (low <= high) {
		int mid = (low + high) / 2;
		
		if (ar[mid] == key){
			return mid;
		}else if (ar[mid] < key){
			low = mid + 1;
		}else{
			high = mid - 1;
		}
	}
	return -1;
}

int main(){
	int ar[] = {10, 3, 24, 2, 7, 15, 6, 19};
	int n = sizeof(ar) / sizeof(ar[0]);
	int key = 6; 
	
	int id = binary_Search(ar, n, key);
	
	if(id != -1){
		cout<<"Element found at index: "<<id<<endl;
	}else{
		cout<<"------ELEMENT NOT FOUND------"<<endl;
	}
	return 0;
}
