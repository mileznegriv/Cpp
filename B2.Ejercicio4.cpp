#include<iostream>

using namespace std;

int main(){
	float a, b, c, d, result=0;
	
	cout<<"Type value a: ";
	cin>>a;
	cout<<"type valu b: ";
	cin>>b;
	cout<<"type value c: ";
	cin>>c;
	cout<<"type value d: ";
	cin>>d;
	
	result= a+(b/(c-d));
	
	cout.precision(3);	
	cout<<"Result is: "<<result;
	
	
	return 0;
}
