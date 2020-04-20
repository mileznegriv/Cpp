#include<iostream>

using namespace std;

int main(){
	float a, b, c, d, result = 0;
	
	cout<<"Type the value of a: "<<endl;
	cin>>a;
	cout<<"type th value of b: "<<endl;
	cin>>b;
	cout<<"type the value of c: "<<endl;
	cin>>c;
	cout<<"Type the value of d: "<<endl;
	cin>>d;
	
	result = (a+b)/(c+d);
	
	cout.precision(3);
	cout<<"The result is: "<<result;
	
	return 0;
}
