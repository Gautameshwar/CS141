//include the lib
#include<iostream>
using namespace std;
//data collector fn
void data(){
	cout <<"Type the no of weeks spent in this sale: ";
	cin  >>nows;
	cout <<"Type the no of bata shoes sold: ";
	cin >>sus;
}
//optn 1 fn
int plainsal(int nows/*No of weeks in sale*/){
	int sal1=600*nows;
	return sal1;
}
//optn 2 fn
float comsal(float sp/*shoe price*/, int sus/*shoe units sold*/,float com1/*commision rate*/, int sph/*salary per hour*/, int nows/*No of weeks in sale*/){
	float sal2=(sph*40*nows)+((com1/100)*(sp*sus));
	return sal2;
}
//optn 3 fn
float plaincom(float sp/*shoe price*/, int sus/*shoe units sold*/,float com2/*commision rate*/, float exp/*extra price for each shoe sold*/){
	float sal3=((sp*sus)*com2/100)+(exp*sus);
	return sal3;
}

//main fn
int main(){
	//attract the reader's attention.
	cout <<"Are you in a dilema where you cant decide which offer is best for you? Fear not!!! Gautam has created a program which will tell you which offer is most profitable."<<endl;
	//define the parameters
	float sp=225, com1=10, com2=20, exp=20;
	int nows, sus, sph=7;
	data();
	int sal1=plainsal(nows);
	float sal2=comsal(sp, sus, com1, sph, nows);
	float sal3=plaincom(sp, sus, com2, exp);
	//explain the situation
	cout <<"Now you have three offers:- "<<endl<<"1: 600/- per week, "<<endl<<"2: 40*7=280/- per week + 10 percent commision on the sales, "<<endl<<"3:20 percent commision + 20/- for each bata shoe sold."<<endl<<endl;
	cout <<"Your salary from 1 is: "<<sal1<<endl;
	cout <<"Your salary from 2 is: "<<sal2<<endl;
	cout <<"Your salary from 3 is: "<<sal3<<endl<<endl<<"Therefore it is advised to choose offer: ";
	if (sal1>sal2 && sal1>sal3){cout <<"1 in which you get a salary of: "<<sal1<<"/-";}
	else if (sal2>sal1 && sal2>sal3){cout <<"2 in which you get a salary of: "<<sal2<<"/-";}
	else {cout <<"3 in which you get a salary of: "<<sal3<<"/-";}
	//terminate the fn
	return 777;
}
