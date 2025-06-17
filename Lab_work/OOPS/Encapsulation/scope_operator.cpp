#include<iostream>
using namespace std;

class Student{
	public:
		void data();
		void checkAge(int age);
		
};

void Student::data(){
	int a, b;
	
	cout<<"Enter a: ";
	cin>>a;
	cout<<"Enter b: ";
	cin>>b;
	cout<<"Sum:- "<<a+b<<endl;
}

void Student::checkAge(int age){
	if(age<=18){
		cout<<"You cannot vote..";
	}else{
		cout<<"You can vote..";
	}
}

int main(){
	Student st;
	st.data();
	st.checkAge(19);
}
