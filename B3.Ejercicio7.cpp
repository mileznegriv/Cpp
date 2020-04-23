#include<iostream>

using namespace std;

int main(){
	int age;
	
	cout<<"Type your age: ";
	cin>>age;
	
	if(age >= 18 && age <= 25){
		cout<<"\n You are in range";
	}
	else{
		cout<<"\n You are not in range";
	}
	
	return 0;
}
