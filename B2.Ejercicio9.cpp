#include<iostream>
#include<math.h>

using namespace std;

int main(){
	float x, y, f = 0;
	
	cout<<"type x value: ";
	cin>>x;
	cout<<"type y value: ";
	cin>>y;
	
	f = sqrt(x)/(pow(y,2)-1);
	
	cout.precision(3);
	cout<<"\n the function value is: "<<f;
	
	return 0;
}
