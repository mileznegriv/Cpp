#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int x, add = 0;
	
	cout<<"Type a number: ";
	cin>>x;
	
	
	for(int i = 1; i <= 2*x-1; i+=2){
		add = add + i;
	}
	
	cout<<"\nThe total add is: "<<add;
	
	
	getch();
	return 0;
}
