//load the lib
#include<iostream>
using namespace std;
//the fn must add all the no from 1 to n
//f(n)=n+f(n-1)
int sum(int n){
	if (n==0){return 0;}
	return n+sum(n-1);//sum(n-1) continues the loop till sum(0)
}
//main fn
int main(){
	int n;
	cout <<"Define n: ";
	cin >>n;
	cout << sum(n);
	//terminate the fn
	return 777;
}
