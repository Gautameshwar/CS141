//load the lib
#include<iostream>
#include<cmath>
using namespace std;
//to find a plaindrome no
//to reverse the no, find the no of digits in it(use log!)
//then if the integer has l digits then the units becomes lth place digit
//then it becomes u*10^l + t*10^l-1 + ...
//we see a recursion in this addition
//so define a fn that takes the integer, l, extracts the units and then makes it lth in place and calls itself with the extracted integer and l--
int revit(int n, int l){
	if (l==0) 
		return n;
	return (n%10)*pow(10, l)+revit(n/10, l-1);
}
//main fn
int main(){
	int n, l, nn;
	cout <<"Type an integer: ";
	cin  >>n;
	l=log10(n);
	nn=revit(n, l);
	if(nn==n) 
		cout <<n<<" is a plaindrome number"<<endl;
	else 
		cout <<n<<" is not a plaindrome number"<<endl;
	return 777;
}
