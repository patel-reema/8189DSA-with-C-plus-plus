#include<iostream>
using namespace std;

main(){
	
	int n, i, sum=0;
	cout<<"Enter the numbers:";
	cin>>n;
	
	for(i=1; i<=n; i++){
		if(i%2==0){
			cout<<i<<" ";
			sum=sum+i;
		}
	}
	cout<<endl;
	cout<<"Sum of even numbers:"<<sum;
}
