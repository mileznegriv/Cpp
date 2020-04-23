#include<iostream>

using namespace std;

int main(){
	int numb;
	
	cout<<"Type a number from 1 to 5: ";
	cin>>numb;
	
	switch(numb){
		case 1:
			cout<<"Is the number 1";
		break;
		case 2:
			cout<<"Is the number 2";
		break;
		case 3:
			cout<<"Is the number 3";
		break;
		case 4:
			cout<<"Is the number 4";
		break;
		case 5:
			cout<<"Is the number 5";
		break;
		default:
			cout<<"Out of range of 1-5";
		break;
	}
	
	return 0;
}
