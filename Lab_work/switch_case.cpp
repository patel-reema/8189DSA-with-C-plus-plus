#include<iostream>
using namespace std;

main(){
	int m;
	
	cout<<"Enter the language number:";
	cin>>m;
	
	switch(m){
		case 1:
			cout<<"This is English Language.";
	 		break;
		case 2:
			cout<<"This is Hindi Language.";
	 		break;
		case 3:
			cout<<"This is Gujarati Language.";
	 		break;
	 		
 		default:
 			cout<<"Invalid Language option";
	}
}
