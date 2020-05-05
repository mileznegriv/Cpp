#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numb;
	
	do{
		cout<<"Type a number from 1 to 10: ";
		cin>>numb;
	}while(numb < 1 || numb > 10);
	
	for(int i = 1; i <= 10; i++){
		cout<<"\n\t"<<numb<<" * "<<i<<" = "<<numb*i<<endl;
	}
	
	cout<<"\n\n";
	
	getch();	
	return 0;
}
