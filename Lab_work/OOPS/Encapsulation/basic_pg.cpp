#include<iostream>
using namespace std;

class Student{
	private:
		int age;
	public:
		void setAge(int a){
			age = a;
		}
		void getAge(){
			return age;
		}
};

int main(){
	Student st;
	st.setAge(16);
	st.cout<<"Age: "<<getAge();
}
