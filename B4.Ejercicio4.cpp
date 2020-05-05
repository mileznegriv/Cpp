#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	float temp = 0, tempt, tempavr = 0, temph = 0, templ = 1000;
	
	for(int i = 0; i < 24; i++){
		if(i % 4 == 0){
			cout<<"type a temperature "<<i<<": ";
			cin>>temp;
			tempt = temp + tempt;
		}
		
		if(temph < temp){
			temph = temp;
		}
		
		if(templ > temp){
			templ = temp;
		}	
	}
	
	tempavr = tempt/6;
	
	cout<<"The average temperature is: "<<tempavr<<endl;
	cout<<"The lowest temperature is: "<<templ<<endl;
	cout<<"The highest temperature is: "<<temph;
	
	getch();
	return 0;
}
