#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numb;
	
	cout<<"Type a number: ";
	cin>>numb;
	
	for(int i = 2; numb > 1; i++){
		while(numb % i == 0){
			cout<<i<<" ";
			numb /= i;
		}
	}
	
}
