#include<iostream>

using namespace std;

int main(){
	int n1, n2;
	
	cout<<"Type 2 numbers: ";
	cin>>n1>>n2;
	
	if(n1==n2){
		cout<<"The numbers are equal";
	}
	else if(n1 > n2){
		cout<<"The mayor is: "<<n1;
	}
	else{
		cout<<"The mayor is: "<<n2;
	}
	
	return 0;
}
