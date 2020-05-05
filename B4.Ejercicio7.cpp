#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int x, add = 0;
	
	cout<<"Type a number: ";
	cin>>x;
	
	for(int i = 1; i <= x; i++){
		add = add + i;
		//add += i;
	}
	
	cout<<"\nThe Total add is: "<<add;
	
	getch();
	return 0;
}
