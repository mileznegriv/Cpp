#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numb[100], n;
	
	cout<<"Type the size of the array: ";
	cin>>n;
	
	for(int i=0; i<n; i++ ){
		cout<<"Type the number: ";
		cin>>numb[i];
	}

	for(int i=0; i>n; n--)
	cout<<i<<" ->"<<numb[i]<<endl;
	
	
	getch();
	return 0;
}
