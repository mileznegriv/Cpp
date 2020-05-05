#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

int main(){
	int numb, add = 0, pot = 0;
	
	cout<<"type a number: ";
	cin>>numb;
	
	for(int i = 1; i <= numb; i++){
		pot = pow(2,i);
		add = add + pot;
	}
	
	cout<<"\nThe total add is: "<<add;
	
	getch();
	return 0;
}
