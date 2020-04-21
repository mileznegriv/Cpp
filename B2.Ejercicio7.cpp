#include<iostream>

using namespace std;

int main(){
	float pract, teori, parti, avrtotal = 0;
	
	cout<<"Type practices grade: ";
	cin>>pract;
	cout<<"Type teoric grade: ";
	cin>>teori;
	cout<<"Type participation grade: ";
	cin>>parti;
	
	avrtotal = ((pract * 3)+ (teori * 6) + parti)/10;
	/* 	pract * = .30;
		teori * = .60;
		parti * = .10;
	*/
	
	cout.precision(3);
	cout<<"\n the total average is: "<<avrtotal;
	
	return 0;
}
