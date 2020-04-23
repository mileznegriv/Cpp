#include<iostream>

using namespace std;

int main(){
	int saldo_inicial = 1000, opc;
	float extra, retiro, saldo = 0;
	
	cout<<"\tBienvenido a su Cajero"<<endl;
	
	cout<<"1.Ingresar Dinero"<<endl;;
	cout<<"2.Retirar dinero"<<endl;
	cout<<"3.Salir"<<endl;
	cout<<"opcion: "<<endl;
	cin>>opc;
	
	switch(opc){
		case 1:
			cout<<"Digite la cantidad a ingresar: ";
			cin>>extra;
			saldo = saldo_inicial + extra;
			cout<<"Dinero en cuenta: "<<saldo;
		break;
		case 2:
			cout<<"Digite la cantidad a retirar: ";
			cin>>retiro;
			
			if(retiro > saldo_inicial){
				cout<<"Saldo insuficiente";
			}
			else{
				saldo = saldo_inicial - retiro;
				cout<<"Dinero en cuenta: "<<saldo;
			}
		break;
		case 3:
		break;
	}
	
	
}
