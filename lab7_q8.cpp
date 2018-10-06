//load the lib
#include<iostream>
using namespace std;
//to add the digits of an integer
//extract the units
//divide the int by 10 and eliminate the units
//add the units to the units of the new int
//we can see a recursion
//the fn inputs n, takes off the units from the n and then calls itself by summing all the remainders!
int digsum(int n){
	if (n==0)
		return 0;
	return (n%10)+digsum(n/10);
}
//main fn
int main(){
	int n;
	cout <<"Type an integer: ";
	cin >>n;
	cout <<"The sum of all the numbers in this integer is: "<<digsum(n)<<endl;
	//terminate the fn
	return 777;
}
