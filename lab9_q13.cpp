#include<iostream>
using namespace std;

int main(){
	char ducky[10]="duckycool";
	cout<<"Printing array 'ducky' using array indices: ";
        cout<<ducky;
	cout<<endl;
	cout<<"Printing array 'ducky' using pointers: ";
	char*p=ducky;
	for(int i=0;i<10;i++){
	        cout<<*(p+i);
	}
	cout<<endl;
	return 777;
}
