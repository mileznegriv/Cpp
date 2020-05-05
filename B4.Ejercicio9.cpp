#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int x, fact = 1;
	
	cout<<"type the number: ";
	cin>>x;
	
	for(int i = 1; i <= x; i++){
		fact = fact * i;
	}
	
	cout<<"\nThe factorial operation is: "<<fact;
	
	
	getch();
	return 0;
}
