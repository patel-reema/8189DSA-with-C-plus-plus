#include<iostream>
using namespace std;

main(){
	char a='x', b='y';
	
	char *p=&a;
	char *q=&b;
	cout<<"A address :- "<<*p<<endl;
	cout<<"B address :-"<<*q;
	
}
