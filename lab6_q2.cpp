//include the lib
#include<iostream>
using namespace std;

//function add it
int addit(int a, int b){
	int s=a+b;
	return s;
}

//reference function add it
void raddit(int &a, int &b, int &rs){
	rs=a+b;//now rs is stored as a+b in int main()
}
//main fn
int main(){
	//ask the numbers
	int a, b, rs;
	cout <<"Type two numbers to find their sum: ";
	cin >>a>>b;
	//run addit
	addit (a, b);
	//display the returned value
	cout <<"Result is (by value): "<<addit (a, b)<<endl;
	//run raddit
	raddit (a, b, rs);
	//display rs
	cout <<"Result is (by reference): "<<rs<<endl;
	//terminate
	return 777;
}
