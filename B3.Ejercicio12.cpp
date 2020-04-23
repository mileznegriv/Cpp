#include<iostream>
#include<math.h>

using namespace std;

int main(){
	int opt, numb; 
	float numb2, cube = 0;
	
	cout<<"\tSelect an option: "<<endl;
	cout<<"1.Cube of a number"<<endl;
	cout<<"2.Pair or Unpair number"<<endl;
	cout<<"3.Cancel"<<endl;
	cin>>opt;
	cout<<"\n";
	
	switch(opt){
		case 1:
			cout<<"Type a number: ";
			cin>>numb2;
			
			cube = pow(numb2, 3);
			
			cout<<"\n The elevated number is: "<<cube;
		break;
		case 2:
			cout<<"Type a number: ";
			cin>>numb;
			
			if(numb % 2 == 0){
				cout<<"\nThe number is pair";
			}
			else if(numb %2 != 0){
				cout<<"\nThe number is unpair";
			}
		break;
		case 3:
		break;	
	}
	return 0;
}
