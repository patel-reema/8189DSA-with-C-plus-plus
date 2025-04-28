#include<iostream>
using namespace std;

main(){
	int s;
	
	cout<<"Enter your Score here:";
	cin>>s;
	
	(s>=81 && s<=100)?cout<<"Your grade is A."<<endl<<"Exellent Work! You are aligible for the next level."
						:(s>=71 && s<=80) ?cout<<"Your grade is B."<<endl<<"Well Done! You are aligible for the next level."
							:(s>=61 && s<=70) ?cout<<"Your grade is C."<<endl<<"Good Job! You are aligible for the next level."
								:(s>=51 && s<=60) ?cout<<"Your grade is D."<<endl<<"You Passed, but you could do better! You are aligible for the next level."
									:(s>=37 && s<=50) ?cout<<"Your grade is E."<<endl<<"Good Job! You are aligible for the next level."
										:cout<<"Your grade is F."<<endl<<"Sorry, you failed! Please try again next time.";
										
										
}
