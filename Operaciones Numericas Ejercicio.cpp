#include<iostream>

using namespace std;

int main (){
	float sp, iva = .16, ip = 0, tp = 0;
	
	cout<<"Type simple price"<<endl;
	cin>>sp;
	
	ip = sp * iva;
	tp = sp + ip;
	
	cout<<"\nTotal price is: "<<tp;
	
	return 0;
}
