#include<iostream>
using namespace std;

class Bank{
	private:
		int accNo;
		string accName;
		float accBalance;
		
	public:
		void setAccount(int accNo, string accName, float accBalance){
			this->accNo = accNo;
			this->accName = accName;
			this->accBalance = accBalance;
		}
		
		void getAccount(){
			cout<<"Your Account Number: "<<this->accNo<<endl;
			cout<<"Your Account Holder Name: "<<this->accName<<endl;
			cout<<"Your Current Account Balance: "<<this->accBalance<<endl<<endl;
		}
		
		int acc_No(){
			return this->accNo;
		}
		
		void setDeposit(float depoMoney){
			this->accBalance+=depoMoney;
			cout<<"Your Account Balance: "<<this->accBalance<<endl;
		}
		
		void getWithdraw(float withMoney){
			this->accBalance-=withMoney;
			cout<<"Your Account Balance: "<<this->accBalance<<endl<<endl;
		}
};

int main(){
	
	Bank b[50];
	int choice, check, i, cnt=0;
	int accNo;
	string accName;
	float accBalance;
	float depoMoney;
	float withMoney;
	
	while(1){
		cout<<"Enter 1 to Create Account"<<endl;
		cout<<"Enter 2 to See Account Details"<<endl;
		cout<<"Enter 3 to Deposit Money"<<endl;
		cout<<"Enter 4 to Withdraw Money"<<endl;
		cout<<"Enter 5 to Exit"<<endl<<endl;
		cout<<"Enter your choice:-";
		cin>>choice;
		cout<<endl;
		if(choice==5){
			cout<<"....Thank you! Have a nice day....";
			break;
		}
		
		switch(choice){
			case 1:
				cout<<"Enter Your Account Number: ";
				cin>>accNo;
				cout<<"Enter Your Name: ";
				cin>>accName;
				cout<<"Enter Your Balance: ";
				cin>>accBalance;
				b[cnt++].setAccount(accNo , accName, accBalance);
				cout<<endl<<"--------SUCCESSFULLY CREATED ACCOUNT--------"<<endl<<endl;
			break;
			
			case 2:
				cout<<"Enter Your Account Number: ";
				cin>>accNo;
				
				check=0;
				for(i=0; i<cnt; i++){
					if(b[i].acc_No()==accNo){
						check=1;
						b[i].getAccount();
						break;
					}
				}
				if(check==0){
					cout<<endl<<"--------YOUR ACCOUNT NOT FOUND--------"<<endl<<endl;
				}
			break;
			
			case 3:
				cout<<"Enter Your Account: ";
				cin>>accNo;
				cout<<"Enter the amount of Deposit money: ";
				cin>>depoMoney;
				
				check=0;
				for(i=0; i<cnt; i++){
					if(b[i].acc_No()==accNo){
						check=1;
						b[i].setDeposit(depoMoney);
						cout<<endl<<"-------SUCCESSFULLY MONEY DEPOSITED--------"<<endl<<endl;
						break;
					}
				}
				if(check==0){
					cout<<endl<<"--------YOUR ACCOUNT NOT FOUND--------"<<endl<<endl;
				}
			break;
			case 4:
				cout<<"Enter Your Account: ";
				cin>>accNo;
				cout<<"Enter the amount of withdraw money: ";
				cin>>withMoney;
				check=0;
				for(i=0; i<cnt; i++){
					if(b[i].acc_No()==accNo){
						check=1;
						b[i].getWithdraw(withMoney);
						cout<<endl<<"-------SUCCESSFULLY MONEY WITHDRAWED--------"<<endl<<endl;
						break;
					}
				}
				if(check==0){
					cout<<endl<<"--------YOUR ACCOUNT NOT FOUND--------"<<endl<<endl;
				}
			break;
		}
		
	}
	
	
	
	return 0;
}
