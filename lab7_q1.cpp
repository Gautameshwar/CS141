//include the lib
#include<iostream>
using namespace std;
//ask the user the no and the power he would like to apply
//now the fn must multiply this no with itself till it reaches the nth time if n is the power
//fn must have a const n, the number,product obtained and a variable n as its input
int pow(int x, int n, int pr, int i/*variable n*/){
	if (i==n){cout <<x<<"^"<<n<<"="<<pr<<endl;//the recursion terminartes after multiplying 'x' n times!
		return 0;
	}
	pr*=x;
	i++;
	pow(x, n, pr, i);
	return 0;
}
//main fn
int main(){
	int x, n;
	cout <<"To find the nth power of x, define x and n: ";
	cin >>x>>n;
	pow(x, n, 1, 0);
	//terminate the fn
	return 777;
}
