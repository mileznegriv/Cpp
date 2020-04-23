#include<iostream>

using namespace std;

int main(){
	char x;
	
	cout<<"Type a minuscule vowel: ";
	cin>>x;
	
	if(x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u'){
		cout<<"\n is right";
	}
	else{
		cout<<"\n Is not a minuscule vowel";
	}
	
	
	return 0;
}
