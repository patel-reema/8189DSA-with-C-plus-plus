#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node *next;
		
		Node(int data){
			this->data=data;
			this->next=NULL;
		}
};

class linkedList{
	public:
		Node *head;
		int c;
		
		linkedList(){
			head = NULL;
			c = 0;
		}
		
		void create_Node(int no){
			Node *newNode = new Node(no);
			
			if(head == NULL){
				head = newNode;
			}
			else{
				Node *p = head;
				
				while(p->next != NULL){
					p = p -> next;
				}
				p -> next = newNode;
			}
			c++;
		}
		
		void view_Node(){
			if(head == NULL){
				cout<<"------EMPTY NODE------"<<endl;
			}
			
			Node *p = head;
			
			while(p != NULL){
				cout<<" "<<p->data;
				p = p->next;
			}
			cout<<endl;
		}
		
		void delete_Node(int pt){
			if(pt<0 || pt>= c || head==NULL){
				cout<<"------POSITION INVALID------"<<endl;
			}
			
			Node *p;
			
			if(pt == 0){
				p = head;
				head = head->next;
			}
			else
			{
				Node *pre = head;
				
				for(int i = 0; i < pt-1; i++)
				{
					pre = pre->next;
				}
				
				p = pre->next;
				pre->next = p->next;
			}
			delete p;
			c--;
		}
		
		void reverse_Node(){
			if(head == NULL || head->next == NULL){
				cout<<"------NODE REVERSED SUCCESSFULLY------"<<endl;
			}
			
			Node *prev = NULL;
			Node *r = head;
			Node *next = NULL;
			
			while(r != NULL){
				next = r->next;
				r->next = prev;
				prev = r;
				r= next;
			}
			head = prev;
		}
};

int main(){
	linkedList l;
	int choice, no, pt;
	
	while(1){
		cout<<"_Choose 1 to Create Node_"<<endl;
		cout<<"_Choose 2 to View Node_"<<endl;
		cout<<"_Choose 3 to Delete Node_"<<endl;
		cout<<"_Choose 4 to Reverse Node_"<<endl;
		cout<<"_Choose 0 to Exit_"<<endl;
		
		cout<<"Enter your choice: ";
		cin>>choice;
		
		if(choice==0){
			cout<<"------THANK YOU ! Visit Again------"<<endl;
			break;
		}
		
		switch(choice){
			
			case 1:
				cout<<"Enter your Number : ";
				cin>>no;
				
				l.create_Node(no);
				
				cout<<"------NODE CREATED SUCCESSFULLY------"<<endl;
			break;
			
			case 2:
				l.view_Node();	
				
				cout<<"------VIEW NODE------"<<endl;
			break;
			
			case 3:
				cout<<"Enter your Position : ";
				cin>>pt;
				
				l.delete_Node(pt);
				
				cout<<"------NODE DELETED SUCCESSFULLY------"<<endl;
			break;
			
			case 4:
				l.reverse_Node();
				
				cout<<"------NODE REVERSED SUCCESSFULLY------"<<endl;
			break;
			
			default:
				cout<<"------INVALID CHOICE------"<<endl;		
		}
	}
	return 0;
}
