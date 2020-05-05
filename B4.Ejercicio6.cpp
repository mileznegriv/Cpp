#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int x, y, total = 1;
	
	cout<<"Type X value: ";
	cin>>x;
	
	do{
		cout<<"Type Y value: ";
		cin>>y;
	}while(y <= 0);
	
	
	for(int i = 1; i <= y; i++){
		
		total = total * x;
	}
	
	cout<<"\The Total is : "<<total;
	
	
	
	getch ();
	return 0;
}
