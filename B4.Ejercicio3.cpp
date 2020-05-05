#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

int main(){
	int numb, add = 0;
	
	for(int i = 1; i <= 10; i++){
		numb = i * i;
		add = add + numb;
	}
	cout<<"The Total add is: "<<add;
	
	getch();
	return 0;
}
