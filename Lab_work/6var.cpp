#include<iostream>
using namespace std;

main(){
	int a, b, c, d, e, f;
	
	cout<<"Enter the value of A:";
	cin>>a;
	cout<<"Enter the value of B:";
	cin>>b;
	cout<<"Enter the value of C:";
	cin>>c;
	cout<<"Enter the value of D:";
	cin>>d;
	cout<<"Enter the value of E:";
	cin>>e;
	cout<<"Enter the value of F:";
	cin>>f;
	
	if(a==b && a==c && a==d && a==e && a==f){
		cout<<"All are same";
	}else{
		if(a>b){
			if(a>c){
				if(a>d){
					if(a>e){
						if(a>f){
							cout<<"A is max";
						}else{
							cout<<"F is max";
						}
					}else{
						cout<<"E is max";
					}
				}else{
					cout<<"D is max";
				}
			}else{
				cout<<"C is max";
			}
		}else{
			if(b>c){
				if(b>d){
					if(b>e){
						if(b>f){
							cout<<"B is max";
						}else{
							cout<<"F is max";
						}
					}else{
						cout<<"E is max";
					}
				}else{
					cout<<"D is max";
				}
			}else{
				if(c>d){
					cout<<"C is max";
				}else{
					if(c>e){
						cout<<"C is max";
					}else{
						if(c>f){
							cout<<"C is max";
						}else{
							cout<<"F is max";
						}
					}
				}
			}
		}
	}
}
