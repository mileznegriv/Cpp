#include<iostream>

using namespace std;

int main(){
	int numb;
	
	cout<<"Type a Number: ";
	cin>>numb;

	if(numb == 0){
		cout<<"The number is 0";
	}
	else if(numb % 2 == 0){
		cout<<"\n The number is pair";
	}
	else{
		cout<<"\nThe number is unpair";
	}
	
	
	return 0;
}
