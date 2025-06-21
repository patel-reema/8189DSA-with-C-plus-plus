#include<iostream>
#include<vector>
using namespace std;

template <typename T>
class studentMemory{
	private: 
		T st_id;
		string st_name;
		
	public:
		studentMemory(T st_id, string st_name){
			this->st_id = st_id;
			this->st_name = st_name;
		}
		
		void show(){
			cout<<"-Student Name: "<<st_name<<"  Student ID: "<<st_id<<endl<<endl;
		}
		
		T getId(){
			return st_id;
		}
		
};

int main(){
	int choice, i, ind=-1;
	int st_id;
	string st_name;
	vector< studentMemory<int> > Student;
	
	while(1){
		cout<<"Enter 1 to add student "<<endl;
		cout<<"Enter 2 to show all student list "<<endl;
		cout<<"Enter 3 to remove student from list "<<endl;
		cout<<"Enter 4 to find any student "<<endl;
		cout<<"Enter 5 to exit.."<<endl<<endl;
		cout<<"Enter Your Choice: ";
		cin>>choice;
		
		if(choice==5){
			cout<<"...Thanks for checking out...";
			break;
		}
		
		switch(choice){
			case 1: 
				cout<<"Enter Student ID: ";
				cin>>st_id;
				cout<<"Enter Student Name: ";
				cin>>st_name;
				
				Student.push_back(studentMemory<int>(st_id, st_name));
				
				cout<<endl<<"-------- STUDENT ID SUCCESSFULLY ADDED --------"<<endl<<endl;
			break;
			
			case 2:
				if(Student.empty()){
					cout<<endl<<"-------- NO STUDENT IDs EXISTED --------"<<endl<<endl;
				}else{
					cout<<endl<<"-------- STUDENT DETAILS --------"<<endl<<endl;
					for(i=0; i < Student.size(); i++){
						Student[i].show();
					}
				}
			break;
			
			case 3:
				if (Student.empty()) {
        			cout<<endl<<"-------- NO STUDENTS TO REMOVE --------"<<endl;
   				}else{
   					cout<<"Enter Student ID to remove: ";
   					cin>>st_id;
   					
   					for(i=0; Student.size()>i; i++){
   							if(Student[i].getId()==st_id){
   								ind=i;
   								break;
							}
					}
					
					if(ind!=-1){
						Student.erase(Student.begin()+ind);
						cout<<endl<<"-------- STUDENT REMOVED SUCCESSFULLY --------"<<endl<<endl;
					}else{
						cout<<endl<<"-------- STUDENT ID DOESN'T EXIST --------"<<endl<<endl;
					}
				}
			break;
			
			case 4:
				if(Student.empty()){
					cout<<endl<<"-------- NO STUDENTS TO SEARCH --------"<<endl;
				}else{
					cout<<"Enter Student ID to remove: ";
   					cin>>st_id;
   					
   					int sr=0;
   					for(i=0; Student.size()>i; i++){
   						if(Student[i].getId()==st_id){
   								cout<<"-------- STUDENT ID FOUND --------"<<endl<<endl;
   								Student[i].show();
   								sr=1;
   								break;
						   }
					}
					
					if(sr=0){
						cout<<endl<<"-------- STUDENT NOT FOUND --------"<<endl<<endl;
					}
				}
			default:
				cout<<endl<<"Sorry! its Invalid choice...."<<endl<<endl;
		}
	}
	return 0;
}
