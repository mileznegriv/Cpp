#include<iostream>

using namespace std;

int main(){
	float numb;
	
	cout<<"Type a number: ";
	cin>>numb;
	
	if(numb > 0){
		cout<<"\nThe number is positive";
	}
	else if(numb < 0){
		cout<<"\nThe number is negative";
	}
	else{
		cout<<"\nThe number is s0";
	}
	
	return 0;
}
