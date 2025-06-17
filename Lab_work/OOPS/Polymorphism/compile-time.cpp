#include<iostream>
using namespace std;

class Calc{
	public:
		void add(int a, int b){
			cout<<a+b<<endl;
		}
		
		void add(int a, int b, int c){
			cout<<a+b+c<<endl;
		}
		
		void add(double a, double b){
			cout<<a+b;
		}
};

int main(){
	Calc c;
	c.add(5,10);
	c.add(10,20,30);
	c.add(1.5, 2.5);
}
