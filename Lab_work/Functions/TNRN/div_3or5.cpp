#include<iostream>
using namespace std;

void checkDiv(){
	int no;
	
	cout<<"Enetr the number: ";
	cin>>no;
	
	if(no%3==0 && no%5==0){
		cout<<"The number is both divisible by 3 & 5..";
	}else{
		cout<<"THe is not divisible by 3 & 5..";
	}
}

int main(){
	checkDiv();
	
	return 0;
}
