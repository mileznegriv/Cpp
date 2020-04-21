#include<iostream>
#include<math.h>
using namespace std;

int main(){
	float catop, catad, hipo = 0;
	
	cout<<"escribe cateto opuesto: ";
	cin>>catop;
	cout<<"escribe cateto adjacente: ";
	cin>>catad;
	
	hipo = sqrt (pow(catop,2) + pow(catad,2));
	cout.precision(3);
	cout<<"\nLa hipotenusa es: "<<hipo;
	
	return 0;
} 
