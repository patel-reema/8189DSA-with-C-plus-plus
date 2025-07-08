#include<iostream>
using namespace std;

class Queue{
	
	private:
		int *ar;
		int rear, front, cap, size;
		
	public:
		
		Queue(int c){
			cap = c;
			ar = new int[cap];
			front = -1;
			rear = -1;
			size = 0;
		}	
		
		bool fullQueue(){
			return rear == cap-1;
		}
		
		bool emptyQueue(){
			return front == -1 || front > rear;
		}
		
		void enQueue(int val) {
			if(fullQueue()){
				
				cout<<"-------- QUEUE IS OVERFLOW --------"<<endl;
				return;
			}
			
			if(front == -1){
				front = 0;
			}
			rear ++;	
			ar[rear] = val;
			size ++;
			
			cout<<endl<<"-------- ENQUEUE SUCCESSFULLY--------"<<endl<<endl;
		}
		
		void deQueue() {
			
			if(emptyQueue()) {
				cout<<"-------- QUEUE IS UNDERFLOW --------"<<endl;
				return;
			}
			
			front ++;
			size --;
		}
		
		void displayQueue() {
			
			if(emptyQueue()){
				cout<<"--------QUEUE IS EMPTY --------"<<endl;
				return;
			}
			
			for(int i = front; i <= rear; i++) {
				cout <<ar[i]<<" ";
			}
			cout <<endl;
		}
		
		void peekQueue() {
			
			if(emptyQueue()){
				cout<<"--------QUEUE IS EMPTY --------"<<endl;
			}else{
				cout<<"Front element :"<<ar[front]<<endl;
			}
		}
		
		int getSize(){
			return size;
		}
		
		~Queue() {
			delete[] ar;
		}
		
};

int main(){
	
	int choice, c, val;
	
	cout<<"Enter the Capacity :";
	cin>>c;
	Queue q(c);
	
	while(1){
		cout<<endl<<"Press 1 to Enqueue "<<endl;
		cout<<"Press 2 to Dequeue "<<endl;
		cout<<"Press 3 to Display "<<endl;
		cout<<"Press 4 to Peek "<<endl;
		cout<<"Press 5 to Insert size "<<endl;
		cout<<"Press 6 to Exit "<<endl;
		
		cout<<"Enter Your Choice :";
		cin>>choice;
		
		if(choice == 6){
			cout<<"--------Thank You--------";
			break;
		}
		
		switch(choice){
			case 1:
				
				cout<<"Enter element to add :";
				cin>>val;
				
				q.enQueue(val);
								
			break;
			
			case 2:
				q.deQueue();
				cout<<"-------- DEQUEUE SUCCESSFULLY --------"<<endl;
			break;
			
			case 3:
				q.displayQueue();
			break;
			
			case 4:
				q.peekQueue();
			break;
			
			case 5:
				cout<<"Queue size :"<<q.getSize()<<endl;
			break;	
			
			default:
				cout<<"--------INVALID CHOICE--------";
		}
	}
	
	return 0;
	
}
