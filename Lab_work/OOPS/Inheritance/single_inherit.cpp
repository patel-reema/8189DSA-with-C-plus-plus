#include<iostream>
using namespace std;

class Parent{
	public:
		int age;
		void checkAge(){
			cout<<"Enter Age: ";
			cin>>age;
			if(age<=18){
				cout<<"You cannot vote.."<<endl;
			}else{
				cout<<"You can vote.."<<endl;
			}
		}
};
class Child: public Parent{
	public:
		int a,b;
		void sum(){
			cout<<"Enter a: ";
			cin>>a;
			cout<<"Enter b: ";
			cin>>b;
			cout<<"Sum:- "<<a+b<<endl;
		}
};

int main(){
	Child c;
	c.checkAge();
	c.sum();
}
