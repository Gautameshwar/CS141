//load the lib
#include<iostream>
using namespace std;
//fn must print all the odd or even no between a and b
//fn must input a, b and i
int odd(int a, int b, int i){
	if (i>b) return 0;//fn terminating condition
	cout <<i<<endl;
	i+=2;
	odd(a, b, i);
	return 0;
}
//main fn
int main(){
	int a, b, i;
	cases:
	cout <<"Define a range from a to b: ";
	cin >>a>>b;
	if (b<=a){//range must have atleast 1 odd or even no in it and hence this condition!
		cout <<"Invalid range input!"<<endl;
		goto cases;
	}
	i=a;
	if (a%2==0) i++;//we want i to start from the 1st odd no within this range
	odd (a, b, i);
	return 777;
}
