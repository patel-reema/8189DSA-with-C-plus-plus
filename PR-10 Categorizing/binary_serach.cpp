#include<iostream>
using namespace std;

int binarySearch(int ar[], int n, int key){
	int low = 0, high = n-1;
	
	while (low <= high) {
		int mid = (low + high) / 2;
		
		if (ar[mid] == key){
			return mid;
		}
		else if (ar[mid] < key){
			low = mid + 1;
		}
		else{
			high = mid - 1;
		}
	}
	return -1;
}

int main(){
	int ar[] = {5, 6, 2, 4, 10, 12, 15, 3};
	int n = sizeof(ar) / sizeof(ar[0]);
	int key = 12; 
	
	int id = binarySearch(ar, n, key);
	
	if(id != -1){
		cout<<"Element found at index: "<<id<<endl;
	}
	else{
		cout<<"...Element not found..."<<endl;
	}
	
	return 0;
}
