#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int i, x = 0;
	
	
	do{
		cout<<"Type a number: ";
		cin>>i;
		
		if(i > 0){
			x = x +1;
		}
		
	}while(i != 0);
	
	cout<<"\nThe quantity mayor than 0 are: "<<x;
	
	getch();
	return 0;
}
