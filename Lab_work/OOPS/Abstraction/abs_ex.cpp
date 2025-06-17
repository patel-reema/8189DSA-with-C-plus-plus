#include<iostream>
using namespace std;

class Shape{
	public:
		virtual void draw()=0;
};

class Circle:public Shape{
	public: 
		void draw(){
				int r;
				float ans;
				
				cout<<"Enter radius: ";
				cin>>r;
				ans=3.14*r*r;
				cout<<"Circle Area: "<<ans<<endl<<endl;
			}
};

class Triangle:public Shape{
	public:
		void draw(){
			int b, h;
			float ans;
			
			cout<<"Enter base: ";
			cin>>b;
			cout<<"Enetr height: ";
			cin>>h;
			ans=0.5*b*h;
			cout<<"Area of triangle: "<<ans<<endl<<endl;
		}
};

int main(){
	Shape* s;
	Circle c;
	Triangle t;
	
	s=&c;
	s->draw();
	
	
	s=&t;
	s->draw();
}
