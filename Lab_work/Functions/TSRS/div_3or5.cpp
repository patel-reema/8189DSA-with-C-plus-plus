#include<iostream>
using namespace std;

int checkDiv(int no){
	return (no%3==0)&&(no%5==0);
}

int main(){
	int num;
	
	cout<<"Enetr the number: ";
	cin>>num;
	
	if(checkDiv(num)){
		cout<<"The number is both divisible by 3 & 5..";
	}else{
		cout<<"THe is not divisible by 3 & 5..";
	}
	
	return 0;
}
