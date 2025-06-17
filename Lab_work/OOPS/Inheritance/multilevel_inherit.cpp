#include<iostream>
using namespace std;

class A{
	public:
		void data_A(){
			cout<<"A"<<endl;
		}
};
class B:public A{
	public:
		void data_B(){
			cout<<"B"<<endl;
		}
};	
class C:public B{
	public:
		void data_C(){
			cout<<"C"<<endl;
		}
};

int main(){
	C c;
	c.data_A();
	c.data_B();
	c.data_C();
}
