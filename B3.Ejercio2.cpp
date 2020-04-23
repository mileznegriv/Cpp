#include<iostream>

using namespace std;

int main(){
	float n1, n2 ,n3;
	
	cout<<"Type 3 numbers: ";
	cin>>n1>>n2>>n3;
	
	if(n1 > n2){
		if(n1 > n3){
			cout<<"The mayor is: "<<n1;
		}
		else if(n3 > n1){
			cout<<"The mayor is: "<<n3;
		}
	}
	else if(n2 > n1){
		if(n2 > n3){
			cout<<"The mayor is: "<<n2;
		}
		else if(n3 > n2){
			cout<<"The mayor is: "<<n3;
		}
	}
	else if(n1 == n2){
		if(n3 > n2){
			cout<<"The mayor is: "<<n3;
		}
		else{
			cout<<"All are equal: ";
		}
	}
		
		
	
	return 0;
}
