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

class LinkedList{
	public:
		Node *head;
		int cnt;
		
		LinkedList(){
			head = NULL;
			cnt = 0;
		}
		
		void createNode(int ele){
			Node *newNode = new Node(ele);
			
			if(head == NULL){
				head = newNode;
			}else{
				Node *ppt = head;
				while(ppt->next != NULL){
					ppt=ppt->next;
				}
				ppt->next = newNode;
			}
			cnt++;
		}
		
		void viewNode(){
			if(head == NULL){
				cout<<endl<<"------------YOUR LIST IS EMPTY------------"<<endl;
			}
			
			Node *ppt = head;
			
			while(ppt != NULL){
				cout<<" "<<ppt->data;
				ppt = ppt->next;
			}
			cout<<endl;
		}
		
		void updateNode(int pos, int newele){
			
			if(pos = 0 || pos >= cnt){
				cout<<endl<<"------------POSITION ID INVALID------------"<<endl<<endl;
			}
			
			Node *ppt = head;
			
			for(int i=0; i<pos; i++){
				ppt=ppt->next;
			}
			
			ppt->data = newele;
		}
		
		void deleteNode(int pos){
			if(pos = 0 || pos != cnt || head == NULL){
				cout<<endl<<"------------POSITION ID INVALID------------"<<endl<<endl;
			}
			Node *ppt;
			if(pos == 0){
				ppt = head;
				head = head->next;
			}else{
				Node *prev=head;
				for(int i = 0; i < pos-1; i++){
					prev=prev->next;
				}
				ppt = prev->next;
				prev->next = ppt->next;
			}
			
			delete ppt;
			cnt--;
		}
};

int main(){
	LinkedList list;
	int ch, ele, pos;
	
	while(1){
		cout<<"Press 1 to Create Node "<<endl;
		cout<<"Press 2 to View Node "<<endl;
		cout<<"Press 3 to Update Node "<<endl;
		cout<<"Press 4 to Delete Node "<<endl;
		cout<<"Press 5 to Exit "<<endl;
		
		cout<<"Enter your choice: ";
		cin>>ch;
		
		if(ch==5){
			cout<<endl<<"-----------THANK YOU------------"<<endl<<endl;
			break;
		}
		
		switch(ch){
			
			case 1:
				cout<<"Enter data:- ";
				cin>>ele;
				list.createNode(ele);
				
				cout<<endl<<"------------NODE CREATED SUCCESSFULLY------------"<<endl<<endl;
			break;
			
			case 2:
				list.viewNode();
				
				cout<<endl<<"------------VIEW YOUR NODES------------"<<endl<<endl;
			break;
			
			case 3:
				cout<<"Enter your position to update:- ";
				cin>>pos;
				
				cout<<"Enter new element to add:- ";
				cin>>ele;
				
				list.updateNode(pos, ele);
				
				cout<<endl<<"------------NODE UPDATE SUCCESSFULLY------------"<<endl<<endl;
			break;
			
			case 4:
				cout<<"Enter your Position to delete:- ";
				cin>>pos;
				
				list.deleteNode(pos);
				
				cout<<endl<<"------------NODE DELETED SUCCESSFULLY------------"<<endl<<endl;
			break;
			
			default:
				cout<<endl<<"----------INVALID CHOICE-----------"<<endl<<endl;
				
		}
	}
	
	return 0;
}
