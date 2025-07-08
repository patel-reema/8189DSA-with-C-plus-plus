#include<iostream>
using namespace std;

class Stack{
	private:
		int *ar;
		int top;
		int c;
		
		
	public:
		Stack(int size){
			c = size;
			ar = new int[c];
			top = -1;
		}	
		
		~Stack(){
			delete[]ar;
		}
		
		bool fullStack(){
			return top == c-1;
		}
		
		bool emptyStack(){
			return top == -1;
		}
		
		void push(int value){
			if(fullStack()){
				
				cout<<"--------STACK IS OVERFLOW--------"<<value<<endl;
				
			}else{
				ar[++top] = value;
				cout<<"--------PUSHED SUCCESSFULLY--------"<<endl;
			}
		}
		
		int pop(){
			
			if(emptyStack()){
				
				cout<<"--------STACK IS UNDERFLOW--------"<<endl;
				return -1;
				
			}else{
				
				int popVal = ar[top--];
				return popVal;
			}
		}
		
		void displayStack(){
			
			if(emptyStack()){
				cout<<"--------EMPTY STACK--------"<<endl<<endl;
			}
			else{
				for(int i=0; i<=top; i++){
					cout<<ar[i]<<" ";
				}
				cout<<endl;
			}
		}

		int peekStack(){
			if(emptyStack()){
				
				cout<<"---Stack is Empty---"<<endl;
				return -1;
				
			}else{
				return ar[top];
			}
		}
		
};

int main(){
	int choice, size, val;
	Stack s(size);
	
		
	cout<<"Enter the size :";
	cin>>size;
	
	while(1){
		
		cout<<"Enter 1 to Push "<<endl;
		cout<<"Enter 2 to Pop "<<endl;
		cout<<"Enter 3 to Display "<<endl;
		cout<<"Enter 4 to Peek "<<endl;
		cout<<"Enter 5 to Exit "<<endl;
		
		cout<<"Enter your Choice :";
		cin>>choice;
		
		if(choice == 5){
			cout<<"--------THANK YOU--------";
			break;
		}
		
		switch(choice){
			case 1:
				cout<<"Enter the Value : ";
				cin>>val;
				
				s.push(val);
			break;
			
			case 2:
				val = s.pop();
				
				if(val != -1){
					cout<<val<<endl;
				}
			break;
			
			case 3:
				s.displayStack();
			break;
			
			case 4:
				val = s.peekStack();
				
				if(val != -1){
					cout<<val<<endl;
				}
			break;
			
			default:
				cout<<"--------INVALID CHOICE--------"<<endl<<endl;
		}
	}	
	
	return 0;
	
}
