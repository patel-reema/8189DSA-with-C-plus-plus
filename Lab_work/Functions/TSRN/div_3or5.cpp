#include<iostream>
using namespace std;

void checkDiv(int no){
	if(no%3==0 && no%5==0){
		cout<<"The number is both divisible by 3 & 5..";
	}else{
		cout<<"THe is not divisible by 3 & 5..";
	}
}

int main(){
	int num;
	
	cout<<"Ente the number: ";
	cin>>num; 
	
	checkDiv(num);
	
	return 0;
}
