#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node *next;
};

int main(){
	Node *HEAD = NULL;
	HEAD = new Node;
	
	HEAD->data=25;
	HEAD->next=NULL;
	
	Node *n2= new Node;
	n2->data=35;
	n2->next=NULL;
	
	cout<<"First Node: "<<HEAD->data<<endl;
	cout<<"Second Node: "<<n2->data<<endl;
	
	return 0;
}
