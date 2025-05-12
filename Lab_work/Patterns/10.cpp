#include<iostream>
using namespace std;

main(){
	int i, j, s;
	
	for(i=5; i>=1; i--){
		for(s=1; s<=i; ++s){
			cout<<" ";
		}
		for(j=5; j>=i; j--){
			cout<<"*";
		}
		for(j=4; j>=i; j--){
			cout<<"*";
		}
		cout<<endl;
	}
	for(i=4; i>=1; i--){
		for(s=5; s>=i; s--){
			cout<<" ";
		}
		for(j=1; j<=i; j++){
			cout<<"*";
		}
		for(j=2; j<=i; j++){
			cout<<"*";
		}
		cout<<endl;
	}
}
