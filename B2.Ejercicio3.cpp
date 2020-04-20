#include<iostream>

using namespace std;

int main(){
	float a, b, c, d, e, f, result=0;
	
	cout<<"type value a: ";
	cin>>a;
	cout<<"type value b: ";
	cin>>b;
	cout<<"type valu c: ";
	cin>>c;
	cout<<"type value d: ";
	cin>>d;
	cout<<"type value e: ";
	cin>>e;
	cout<<"type value f: ";
	cin>>f;
	
	result = (a+(b/c))/(d+(e/f));
	cout.precision(3);
	cout<<"\nThe result is: "<<result;
	
	return 0;
}
