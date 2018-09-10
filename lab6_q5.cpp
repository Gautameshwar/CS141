//load the lib
#include<iostream>
using namespace std;

//addit fn
int addit(int a,int b){
	int s=a+b;
	return s;
}

//greatest fn
int bigger(int a,int b){
	int big;
	if (a>b){big=a;}
	else if (a==b){big=a;}
	else {big=b;}
	return big;
}

//smallest fn
int smaller(int a,int b){
	int sml;
	if (a<b){sml=a;}
	else if (a==b){sml=a;}
	else {sml=b;}
	return sml;
}

//main fn
int main(){
	int a, b, i;
	//Ask the user 2 nos
	cout <<"Type any two integers: ";
	cin >>a>>b;
	//ask the user which operation he would like to do on these nos
	cout <<"Options: "<<endl<<endl;
	cout <<"1: Add them."<<endl;
	cout <<"2: Find the greatest number."<<endl;
	cout <<"3: Find the smallest number."<<endl;
	cases:
	cout <<"Enter the number of the operation you would like to perform: ";
	cin >>i;//i is the case desired
	if (i==1 ||i==2 ||i==3){
		if (i==1){
			//run addit fn
			addit(a, b);
			//display the returned value
			cout <<"Sum of the numbers is: "<<addit (a, b)<<endl;
			}
		else if (i==2){
			//run bigger fn
			bigger(a, b);
			//display the returned value
			cout <<"The greatest number is: "<<bigger(a, b)<<endl;
			}
		else {
			//run smaller fn
			smaller(a, b);
			//display the returned value
			cout <<"The smallest number is: "<<smaller(a, b)<<endl;
			}
		}
	else {cout <<"Invalid input"<<endl<<endl;//in case the user types a no other than 1 2 or 3
		goto cases;
		}
	//terminate
	return 777;
}
