#include<iostream>
using namespace std;

void update(int *p);

void update(int *p){
	int i;
	for(i=0; i<5 ; i++){
		cout<<(*p+1)<<" "<<(p+1)<<endl;
		p++;
	}
}

main(){
	int a[3]={10, 20, 30};
	
	int *p=a;
	update(p);
}

