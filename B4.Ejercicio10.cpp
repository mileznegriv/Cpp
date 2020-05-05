#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int x, fact = 1, add = 0;
	
	cout<<"type the number: ";
	cin>>x;
	
	for(int i = 1; i <= x; i++){
		fact = fact * i;
		add = add + fact;
	}
	
	cout<<"\nThe factorial operation is: "<<add;
	
	
	getch();
	return 0;
}
