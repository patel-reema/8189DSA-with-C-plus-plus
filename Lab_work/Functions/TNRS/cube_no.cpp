#include<iostream>
using namespace std;

int cube(){
	int no;
	cout<<"Enter the number for cube: ";
	cin>>no;
	return no*no*no;
}

int main(){
	int ans;
	ans=cube();
	
	cout<<"Cube :-"<<ans;
	return 0;
}
