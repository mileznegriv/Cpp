#include<iostream>

using namespace std;

int main(){
	float x, y, z, a;
	
	cout<<"type three numbers: ";
	cin>>x>>y>>z;
	cout<<"\nType a new number: ";
	cin>>a;
	
	if(a == x || a == y || a == z){
		cout<<"\natleast one of the number is equal";
	}
	else{
		cout<<"\n any of the numbers are equal";
	}
	
	return 0;
}
