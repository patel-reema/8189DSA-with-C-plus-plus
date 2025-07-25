#include<iostream>
#include<vector>
using namespace std;

void print_array(vector<int> &ar){
	for(int i=0; i<ar.size(); i++){
		cout<<"Unsorted array: "<<ar[i];
	}
	cout<<endl;
}

void merge(vector<int> &ar, int low, int mid, int high){
	vector<int> t;
	
	int left = low;
	int right = mid + 1;
	
	while(left <= mid && right <= high){
		if(ar[left] <= ar[right]){
			t.push_back(ar[left]);
			left++;
		}
		else{
			t.push_back(ar[right]);
			right++;
		}
	}
	while(left <= mid){
		t.push_back(ar[left]);
		left++;
	}
	
	while(right <= high){
		t.push_back(ar[right]);
		right++;
	}
	
	for(int i=low;i<=high;i++){
		ar[i] = t[i-low];
	}
}

void merge_sort(vector<int> &a,int low,int high){
	if(low >= high){
		return;
	}
	
	int mid = (low + high) / 2;
	merge_sort (a, low, mid);
	merge_sort (a, mid + 1, high);
	merge (a, low, mid, high);
}

int main(){
	int size;
	
	cout<<"Enter the size :";
	cin>>size;
	
	vector<int>ar;
	
	for(int i=0; i<size; i++){
		int ele;
		cout<<"Enter the elements: ";
		cin>>ele;
		
		ar.push_back(ele);
	}
	
	print_array(ar);
	merge_sort(ar, 0, size-1);
	print_array(ar);
}
