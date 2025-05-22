#include<iostream>
using namespace std;

main(){
	int i, j, row, col;
	
	cout<<"Enter the row size: ";
	cin>>row;
	cout<<"Enter the cloumn size: ";
	cin>>col;
	
	int a[row][col];
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			cout<<"a["<<i<<"]"<<"["<<j<<"] : ";
			cin>>a[i][j];
		}
	}
	int large=0;
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			if(a[i][j]>large){
				large=a[i][j];
			}
		}
		cout<<endl;
	}
	cout<<"The largest element :"<<large;
	
}
