#include<iostream>
using namespace std;

void cube(){
	int no, ans;
	cout<<"Enter the number for cube: ";
	cin>>no;
	ans=no*no*no;
	
	cout<<"Cube :-"<<ans;
}

int main(){
	cube();
	return 0;
}
