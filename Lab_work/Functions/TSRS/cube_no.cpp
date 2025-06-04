#include<iostream>
using namespace std;

int cube(int no){
	return no*no*no;
}

int main(){
	int num, ans;
	
	cout<<"Enter the number for cube: ";
	cin>>num;
	
	ans=cube(num);
	
	cout<<"Cube :-"<<ans;
	return 0;
}
