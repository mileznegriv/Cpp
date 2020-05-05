#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	float test1, test2, test3;
	int all = 0, one = 0, final = 0;
	
	for(int i =1; i<= 5; i++){
		cout<<i<<" Type the average from first test: ";
		cin>>test1;
		cout<<i<<" Type the average from second test: ";
		cin>>test2;
		cout<<i<<" Type the average from third test: ";
		cin>>test3;
		cout<<"\n";
		
		if(test3 >= 6 && test2 >=6 && test1 >= 6){
			all = all + 1;
		}
		
		if(test3 >= 6 || test2 >=6 || test1 >= 6){
			one = one + 1;
		}
		
		if(test3 >= 6 && test2 < 6 && test1 < 6){
			final = final + 1;
		}
	}
	
	cout<<"\nThe students that pass all the exams are: "<<all;
	cout<<"\nThe students that pass atleast one exam are: "<<one;
	cout<<"\nThe students that only pass the final exam are: "<<final;
	
	getch();
	return 0;
}
