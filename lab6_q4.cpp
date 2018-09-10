//load the lib
#include <iostream>
using namespace std;

//smaller fn
int smaller(int a, int b){
	int sml;
	if (a<b){sml=a;}
	else if (a==b){sml=a;}
	else{sml=b;}
	return sml;
}

//smaller fn by reference
void rsmaller(int &a, int &b, int &sml){
	if (a<b){sml=a;}
	else if (a==b){sml=a;}
	else{sml=b;}
}

//main fn
int main(){
	int a, b, sml;
	//ask the user for the nos
	cout <<"Type two numbers to find the smallest one: ";
	cin >>a>>b;
	//run smaller fn
	smaller(a, b);
	//display the returned value
	cout <<"The smallest number is(by value): "<<smaller(a, b)<<endl;
	//run rsmaller fn
	rsmaller(a, b, sml);
	//display the sml value
	cout <<"The smallest number is(by reference): "<<sml<<endl;
	//terminate
	return 777;
}
