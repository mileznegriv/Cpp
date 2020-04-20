#include<iostream>

using namespace std;

int main(){
	float a,b, result = 0;
	
	cout<<"Type the value of a: "<<endl;
	cin>>a;
	cout<<"Type the value of b: "<<endl;
	cin>>b;
	
	result = (a/b) + 1;
	
	cout.precision(2);
	cout<<"The Result is : "<<result<<endl;
	
	return 0;
}
