#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numb, add = 0;
	
	do{
		cout<<"Type a number: ";
		cin>>numb;
		
		if(numb > 0){
			add = add + numb;
		}
		
		
	}while((numb < 20 || numb > 30) && (numb != 0));
	
	cout<<"\nThe total add is: "<<add;
	
	
	getch();
	return 0;
}
