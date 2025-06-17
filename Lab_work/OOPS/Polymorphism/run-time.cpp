#include<iostream>
using namespace std;

class Shape{
	public:
		virtual void draw(){
			cout<<"Drawing shapes..";
		}
};
class circle:public Shape{
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

class triangle:public Shape{
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

class square:public Shape{
	public:
		void draw(){
			int side;
			float ans;
			
			cout<<"Enter the lenght of square: ";
			cin>>side;
			ans=side*side;
			cout<<"Area of square: "<<ans<<endl<<endl;
		}
};

int main(){
	Shape* s;
	circle c;
	triangle t;
	square q;
	
	s=&c;
	s->draw();
	
	s=&t;
	s->draw();
	
	s=&q;
	s->draw();
	
}
