//include lib
#include<iostream>
using namespace std;
//main fn
int main(){
	//initialising no of each fruits and their cost
	int a=0, m=0, b=0;//a=apples, b=bananas, m=mangoes
	float ap=1, mp=3, bp=0.5, tp=0;//ap=apple price, bp=banana price, mp=mango price, tp=total price
	//loop
	//loop the no of banana for a fixed value of apple and mango
	for (a;a<=100;a++){//here, we are fixing a specific no of apple units for all the possible combinations of mangoes and bananas for the nested loop to run...
		for (m=0/*reseting m to 0 is necessary since for the next loop of a, m value must again become 0!*/;m<=100-a/*a+m<=100 for the banana units to be defined!*/;m++){
			//here we are looping the mango units and checking if the total cost is 100 for every such combination
			b=100-a-m;//b is fixed for fixed a and m as the total no of fruits is equal to 100!
			tp=(a*ap)+(b*bp)+(m*mp);
			//if the total cost reaches exactly 100 then print the value of a, m and b
			if (tp==100){cout <<"No of apples: "<<a<<endl<<"No of mangoes: "<<m<<endl<<"No of bananas: "<<b<<endl<<"Cost for apples:"<<a*ap<<endl<<"Cost for mangoes:"<<m*mp<<endl<<"Cost for bananas:"<<b*bp<<endl<<"Total cost: "<<tp<<endl<<endl;}
			//else run the loop for other values of mango!
		}
	}
	//express your success!
	cout <<"And that's all folks! Happy shopping :)"<<endl;
	//terminate the fn
return 777;
}

