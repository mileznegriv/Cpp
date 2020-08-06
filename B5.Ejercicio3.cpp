#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numb[100], n;
	
	cout<<"Type the elements in the array: ";
	cin>>n;
	
	for(int i=0; i<n; i++){
		cout<<"type a number: ";
		cin>>numb[i];
	}
	
	for(int i=0; i<n; i++)
	cout<<i<<" ->"<<numb[i]<<endl;
	
	getch();
	return 0;
}
