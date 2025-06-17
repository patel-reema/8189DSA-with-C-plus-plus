#include<iostream>
using namespace std;

class A{
	public:
		int A;
};

class B{
	public:
		int B;
};

class C:public A, public B{
	public:
		void sum(){
			cout<<"Enter a: ";
			cin>>A;
			cout<<"Enter b: ";
			cin>>B;
			cout<<"Sum:- "<<A+B<<endl;
		}
};

int main(){
	C c;
	c.sum();
}
