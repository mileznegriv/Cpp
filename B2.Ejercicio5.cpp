#include<iostream>

using namespace std;

int main(){
	int x, y, aux;
	
	cout<<"Type value x: ";
	cin>>x;
	cout<<"Type value y: ";
	cin>>y;
	
	aux = x;
	x = y;
	y = aux;
	
	cout<<"\nNew x value: "<<x<<endl;
	cout<<"New y Value: "<<y<<endl;
	
	return 0;
}
