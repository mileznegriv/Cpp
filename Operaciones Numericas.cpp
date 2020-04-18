#include<iostream>

using namespace std;

int main (){
	int numb1, numb2, add =0, sub = 0, mul = 0, div = 0;
	
	cout<<"Type first number: ";
	cin>>numb1;
	cout<<"\nType second number: ";
	cin>>numb2;
	
	add = numb1 + numb2;
	sub = numb1 - numb2;
	mul = numb1 * numb2;
	div = numb1 / numb2;
		
	cout<<"\nThe add is: "<<add<<endl;
	cout<<"The subtraction is: "<<sub<<endl;
	cout<<"The multiplication is: "<<mul<<endl;
	cout<<"The division is: "<<div;	
		
	return 0;
}
