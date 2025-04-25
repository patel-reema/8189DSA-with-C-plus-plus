#include<iostream>
using namespace std;

main(){
	int c, s;
	
	cout<<"Enter the Country number:";
	cin>>c;
	
	
	switch(c){
		case 1:
			cout<<"India country"<<endl;
			
			cout<<"Enter state number:";
			cin>>s;
			switch(s){
				case 1:
					cout<<"Gujarat";
					break;
				case 2:
					cout<<"Goa";
					break;
				case 3:
					cout<<"Maharashtra";
					break;	
			}
			break;
		case 2:
			cout<<"Uk country"<<endl;
			
			cout<<"Enter state number:";
			cin>>s;
			switch(s){
				case 1:
					cout<<"England";
					break;
				case 2:
					cout<<"Scotland";
					break;
				case 3:
					cout<<"Ireland";
					break;	
			}
			break;
		case 3:
			cout<<"USA country"<<endl;
			
			cout<<"Enter state number:";
			cin>>s;
			switch(s){
				case 1:
					cout<<"Florida";
					break;
				case 2:
					cout<<"Virginia";
					break;
				case 3:
					cout<<"Hawaii";
					break;	
			}
			break;
		
		
		default:
				cout<<"Country not available.";
	}
}
