#include<iostream>
using namespace std;

class A{
	public:
		int age;
};

class B:public A{
	public:
		void printAge(){
			cout<<"Enter your Age: ";
			cin>>age;
			cout<<"Your age : ";
		}
};

class C:public A{
	public:
		void checkAge(){
			B b;
			b.printAge();
			if(age<=18){
				cout<<"You cannot vote.."<<endl;
			}else{
				cout<<"You can vote.."<<endl;
			}
		}
};

int main(){
	C c;
	c.checkAge();
}
