#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int x, add = 0, pos = 0, neg = 0;
	
	cout<<"Type a number: ";
	cin>>x;
	
	for(int i = 1; i <= x; i++){
		
		if(i%2 == 0){
			neg = neg - i;
		}
		else if(i%2 != 0){
			pos = pos + i;
		}	
	}
	
	add = pos + neg;
	
	cout<<"The operation result is: "<<add;
	
	getch();
	return 0;
}
