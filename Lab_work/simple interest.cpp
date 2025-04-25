#include<iostream>
using namespace std;

main(){
	int p, r, t, Ans;
	
	cout<<"Enter principle amount:";
	cin>>p;
	cout<<"Enter rate:";
	cin>>r;
	cout<<"Enter time:";
	cin>>t;
	
	Ans=p*r*t/100;
	cout<<"Answer:"<<Ans;
}
