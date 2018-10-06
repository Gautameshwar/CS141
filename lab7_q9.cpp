//load the lib
#include<iostream>
using namespace std;
//to find the factorial of n
//n is multiplies with its preceding number n-1 which is again multiplied with its preceding no n-2 and so on
//we see a recursion
//the function multiplies n and calls itself by inputing n-1
int fact(int n){
	if (n==0)
		return 1;
	return n*fact(n-1);
}
//main fn
int main(){
	int n;
	cout <<"Type a number: ";
	cin >>n;
	cout <<"The factorial of "<<n<<" is: "<<fact(n)<<endl;
	//terminate the fn
	return 777;
}
