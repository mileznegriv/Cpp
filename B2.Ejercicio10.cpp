#include<iostream>
#include<math.h>

using namespace std;

int main(){
	float a, b, c, x1 = 0, x2 = 0;
	
	cout<<"	Type a value: ";
	cin>>a;
	cout<<"	Type b value: ";
	cin>>b;
	cout<<"	Type c value: ";
	cin>>c;
	
	x1 = (b*(-1)) + (sqrt( pow(b,2) - (4*(a * c)))) / (2*a);
	x2 = (b*(-1)) - (sqrt( pow(b,2) - (4*(a * c)))) / (2*a);
	
	cout<<"\n	The x1 value is: "<<x1;
	cout<<"\n	The x2 value is: "<<x2;
	return 0;
}
