//include the lib
#include<iostream>
using namespace std;

//Input fn
void input(int &unitcst, int &units, int &taxrt){
	cout <<"Type the Unit cost: ";
	cin >>unitcst;
	cout <<"Type the Number of units: ";
	cin >>units;
	cout <<"Type the tax percentage(%): ";
	cin >>taxrt;
}

//Processing fn
void processor(int unitcst, int units, int taxrt, float &salestx, float &totdue){
	salestx=(unitcst*units*taxrt)/100;
	totdue=(unitcst*units)+salestx;
}

//Output fn
void output(int unitcst, int units, int taxrt, float salestx, float totdue){
	cout <<"Summary: "<<endl;
	cout <<"Unit cost: "<<unitcst<<endl;
	cout <<"Number of units: "<<units<<endl;
	cout <<"Tax rate: "<<taxrt<<endl;
	cout <<"Sales tax: "<<salestx<<endl;
	cout <<"Total amount after taxing: "<<totdue<<endl;
}

//main fn
int main(){
	int unitcst, units, taxrt;
	float salestx, totdue;//they can also be decimals
	//run the input fn
	input (unitcst, units, taxrt);
	//run the processing fn after the input fn has defined the input parameters
	processor (unitcst, units, taxrt, salestx, totdue);
	//run the output program after the processing program has produced the results
	output (unitcst, units, taxrt, salestx, totdue);
	//terminate
	return 777;
}
