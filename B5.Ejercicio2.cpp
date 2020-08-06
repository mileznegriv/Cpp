#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numb[5] = {1,8,3,5,5};
	int add = 1;
	
	for(int i=0; i<5; i++){
		add *= numb[i];
	}
	
	cout<<"The total add is: "<<add<<endl;
	
	getch();
	return 0;
}
