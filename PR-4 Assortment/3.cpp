#include<iostream>
using namespace std;

main(){
	int i, j,row, col;
	
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
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			cout<<a[j][i]<<" ";
		}
		cout<<endl;
	}
}
