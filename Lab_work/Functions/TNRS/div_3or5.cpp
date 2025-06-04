#include<iostream>
using namespace std;

int checkDiv(){
	int no;
	
	cout<<"Enter the number: ";
	cin>>no;
	
	if(no%3==0 && no%5==0){
		return 	true;
	}else{
		return false;
	}
}

int main(){
	if(checkDiv()){
		cout<<"The number is both divisible by 3 & 5..";
	}else{
		cout<<"THe is not divisible by 3 & 5..";
	}
	 return 0;
}
