#include<iostream>

using namespace std;

int main(){
	char x;
	
	cout<<"Type a vowel: ";
	cin>>x;
	
	switch(x){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u': 
			cout<<"\nIs a minuscule vowel"; 
		break;
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
			cout<<"\nIs a capital vowel";
		break;
		default:
			cout<<"\nis not a vowel";
		break;			
	}
	
	return 0;
}
