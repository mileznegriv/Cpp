#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main(){
	int usernum, random, attempts = 0;
	char opc;
	
	do{
		srand(time(NULL));	
		random = 1 + rand() % 100;
		cout<<"\tAdivina el numero del 1 al 100"<<endl;
		
		do{
			cout<<"\nEscribe un numero: ";
			cin>>usernum;
	
			attempts = attempts + 1;
						
			if(usernum < random){
				cout<<"\nTu numero es menor";
			}
			else if(usernum > random){
				cout<<"\nTu numero es mayor";
			}
			
		}while(usernum != random);
		
		cout<<"\nLo lograste!!!";
		cout<<"\nHiciste "<<attempts<<" intentos";
		cout<<"\nQuieres intentar de nuevo??  s/n"<<endl;
		cin>>opc;
		
	}while(opc == 's');
	
	getch ();
	return 0;
}
