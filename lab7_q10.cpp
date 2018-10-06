//load the lib
#include<iostream>
using namespace std;
//to find the nth fibonacci no
//it starts with 0 and 1 and the nth no is : f(n)=f(n-1) + f(n-2)
//the fn inputs 1 and 0
//it then finds f(3) as f(2)=1 + f(1)=0
//then f(4)=f(3) + f(2)
//we see a recursion
//f(n-1, n)=(n-1) +(n) where n-1 and n are n-1th and nth term respectively
int fibo(int a, int b, int i, int nth, int n){//a b are the first fibonacci nos(b is variable which will become the n-2th fibonacci no in the next recursion), i is defined to terminate this recursion at nth value, nth is the int that stores the new fibonacci no and again inputs it to the next recursion, n defines the nth term of the sequence; required to compare everytime if the recursion produces the nth term or not!
	if (i==n)
		return nth;
	if (n==2)
		return 1;
	if (n==1)
		return 0;
	nth=a+b;
	i++;
	return fibo(b, nth, i, nth, n);
}
//main fn
int main(){
	int n;
	cout <<"Type a number: ";
	cin >>n;
	cout <<"The "<<n<<"th term of the fibonacci sequence starting from 0 and 1 is: "<<fibo(0, 1, 2, 0, n)<<endl;
	//terminate the fn
	return 777;
}
