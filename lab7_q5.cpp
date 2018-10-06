//load the lib
#include<iostream>
using namespace std;
//the fn must add all the odd nos from 1 to n
//the fn stops when n =-1
//if n is even then reset it to the preceding odd no
int sumodd(int n){
	if (n==-1)return 0;
	return n+sumodd(n-2);
}
//main fn
int main(){
	int n;
	cout <<"Define n: ";
	cin >>n;
	if (n%2==0)n--;
	cout <<"sum of all odd numbers from 1 to n is: "<<sumodd(n)<<endl;
	//terminate the fn
	return 777;
}
