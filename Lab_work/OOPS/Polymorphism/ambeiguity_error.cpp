#include<iostream>
using namespace std;

class A{
	public:
		void show(){
			cout<<"A"<<endl;
		}
};

class B{
	public:
		void show(){
			cout<<"B"<<endl;
		}
};

class C:public A, public B{
	public:
		void display(){
			B::show();
		}
};

int main(){
	C c;
	c.display();
	B b;
	b.show();
}
