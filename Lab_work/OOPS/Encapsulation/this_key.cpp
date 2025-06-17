#include<iostream>
using namespace std;

class Student{
	private:
		int age;
	
	public:
		void setAge(int age){
			this->age = age;
		}
		void getAge(){
			cout<<"Student age: "<<this->age;
		}
};

int main(){
	Student st;
	st.setAge(16);
	st.getAge();
}
