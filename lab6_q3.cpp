//load the lib
#include<iostream>
using namespace std;

//greatest value fn
int bigger(int a,int b){
	int big;
	if (a>b){big=a;}
	else if (a==b){big=a;}
	else {big=b;}
	return big;
}

//greatest value fn by reference
void rbigger(int &a, int &b, int &big){
	if (a>b){big=a;}
	else if (a==b){big=a;}
	else {big=b;}
}

//main fn
int main(){
	int a, b, big;
	cout <<"Type two numbers to find the greater one: ";
	cin >>a>>b;
	//run bigger fn
	bigger(a, b);
	//displat returned value
	cout <<"The bigger no is(by value): "<<bigger(a, b)<<endl;
	//run rbigger fn
	rbigger(a, b, big);
	//display big
	cout <<"The bigger no is(by reference): "<<big<<endl;
	//terminate
	return 777;
}
