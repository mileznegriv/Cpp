#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numb[] = {1,2,3,4,5};
	int add = 0;
	
	for(int i=0; i<5; i++){
		add = add + numb[i];
	}
	
	cout<<"The total add is: "<<add<<endl;
	
	getch();
	return 0;
}
