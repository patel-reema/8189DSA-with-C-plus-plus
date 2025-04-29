#include<iostream>
using namespace std;

main(){
	
	int n, i, multi=1;
	cout<<"Enter the number:";
	cin>>n;
	cout<endl;
	for(i=1; i<=10; i++){
		multi=i*n;
		cout<<n<<" * "<<i<<" = "<<multi<<endl;
	}
}
