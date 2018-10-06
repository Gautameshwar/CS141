//load the lib
#include<iostream>
using namespace std;
//a fn that reverses the digits of a given integer
//define i which captures the last digit of the integer
//eliminate that digit from the integer
//recurse this to the next fn where another different i and integer is saved
//when the integer becomes 0 terminate this loop
//now print all the saved i's from the recursed fns
int rev(int n, int i){
	if (n==0) return 0;
	i=n%10;
	n/=10;
	cout <<i;
	rev(n, i);
	return 0;
}
//main fn
int main(){
	int n;
	cout <<"Type an integer: ";
	cin >>n;
	rev(n, 0);
	//show how amazing your program was;)
	cout <<endl<<"Voila! The numbers just reversed magically!!!"<<endl;
	//terminate the fn
	return 777;
}
