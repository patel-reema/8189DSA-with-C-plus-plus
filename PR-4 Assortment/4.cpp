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
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	
	
	int rowno, sumrw=0;
	cout<<"Enter Row number:";
	cin>>rowno;
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			 if(i=rowno){
			 	cout<<a[i][j];
			 	sumrw=sumrw+a[i][j];
			 }
		}
		cout<<endl;
	}
	cout<<"Sum of the row "<<rowno<<": "<<sumrw;
	
	cout<<endl;cout<<endl;
	
	int colno, sumcl=0;
	cout<<"Enter Column number:";
	cin>>colno;
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			 if(j=rowno){
			 	cout<<a[i][j];
			 	sumcl=sumcl+a[i][j];
			 }
		}
		cout<<endl;
	}
	cout<<"Sum of the column "<<colno<<": "<<sumcl;
}
