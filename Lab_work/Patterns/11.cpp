#include<iostream>
using namespace std;

main(){
	int i, j, s;

	for(i=5; i>=1; i--)
	{
		for(j=1; j<=i; j++)
		{
			cout<<"*";
		}
		for(s=5; s>i; s--)
		{
			cout<<"  ";
		}
		for(j=i; j>=1; j--)
		{
			cout<<"*";
		}
		cout<<endl;
	}

	for(i=1; i<=5; i++)
	{
		for(j=1; j<=i; j++)
		{
			cout<<"*";
		}
		for(s=5; s>i; s--)
		{
			cout<<"  ";
		}
		for(j=i; j>=1; j--)
		{
			cout<<"*";
		}
		cout<<endl;
	}

}
