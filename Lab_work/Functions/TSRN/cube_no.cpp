#include<iostream>
using namespace std;

int cube(int no){
	int ans;
	ans=no*no*no;
	
	cout<<"Cube :-"<<ans;
}

int main(){
	int num;
	
	cout<<"Enter the number for cube: ";
	cin>>num;
	
	cube(num);
	
	return 0;
}
