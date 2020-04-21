#include<iostream>

using namespace std;

int main(){
	float a, b, c, d, aver = 0;
	
	cout<<"Type a average: ";
	cin>>a;
	cout<<"type b average: ";
	cin>>b;
	cout<<"Type c average: ";
	cin>>c;
	cout<<"Type d average: ";
	cin>>d;
	
	aver = (a + b + c + d)/4;
	
	cout.precision(2);
	cout<<"\nTotal average is: "<<aver;	
	return 0;
}
