#include<iostream>
using namespace std;

main(){
	
	int n, i, sum=0;
	cout<<"Enter the numbers:";
	cin>>n;
	
	for(i=1; i<=n; i++){
			cout<<i<<" ";
			sum=sum+i;
	}
	cout<<endl;
	cout<<"Sum of numbers:"<<sum;
}
