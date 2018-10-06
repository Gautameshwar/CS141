//load the lib
#include<iostream>
using namespace std;
//the fn must print all the no from 1 to n
//variable n must be defined
int nat(int i, int n){
	if (i==n+1) return 0;
	cout <<i<<endl;
	i++;
	nat(i, n);
	return 0;
}
//main fn
int main(){
	int n;
	cout <<"Type n for which all the nos from 1 to n is printed: ";
	cin >>n;
	nat(1, n);
	return 777;
}
