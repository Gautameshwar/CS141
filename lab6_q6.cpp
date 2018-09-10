//load the lib
#include<iostream>
using namespace std;

//addeve fn
int sumevennumbers(int a,int b){
	//loop
	int sumeven=0;
	if (a%2==1){a++;}//(i.e) if a is for example 3 then the next even no is 4. so this resets a to the nearest even integer so that the loop adds all the consecutive even integers
	for (int i=a;i<=b;i+=2){
		sumeven+=i;
	}
	return sumeven;
}

//addodd fn
int sumoddnumbers(int a, int b){
	//loop
	int sumodd=0;
	if (a%2==0){a++;}//similar to the even loop initialisation of a
	for (int i=a;i<=b;i+=2){
		sumodd+=i;
	}
	return sumodd;
}

//addoddsqr fn
int sumsquareoddnumbers(int a, int b){
	int sumsquareodd=0;
	//loop
	if (a%2==0){a++;}//similar to the even loop initialisation of a
	for (int i=a;i<=b;i+=2){
		sumsquareodd+=i*i;//adds i^2 to the sum
	}
	return sumsquareodd;
}

//addevesqr fn
int sumsquareevennumbers(int a, int b){
	int sumsquareeven=0;
	//loop
	if (a%2==1){a++;}//similar to the even loop initialisation of a
	for (int i=a;i<=b;i+=2){
		sumsquareeven+=i*i;//adds i^2 to the sum
	}
	return sumsquareeven;
}

//main fn
int main(){
	int sumeven, sumodd, sumsquareodd, sumsquareeven, a, b;
	cases:// makes sure that the user types proper range
	cout <<"Type the range of integers from min to max: ";
	cin >>a>>b;
	if (a<b-1/*that is if a and b have atleast one odd or even number between them*/){
		//run addeve, addodd, addoddsqr, addevesqr fns
		sumevennumbers(a,b);
		sumeven=sumevennumbers(a,b);

		sumoddnumbers(a,b);
		sumodd=sumoddnumbers(a,b);

		sumsquareoddnumbers(a,b);
		sumsquareodd=sumsquareoddnumbers(a,b);

		sumsquareevennumbers(a,b);
		sumsquareeven=sumsquareevennumbers(a,b);
		//display the results
		cout <<"The sum of all even numbers within the given range: "<<sumeven<<endl;
		cout <<"The sum of all odd numbers within the given range: "<<sumodd<<endl;
		cout <<"The sum of all even numbers squared: "<<sumsquareeven<<endl;
		cout <<"The sum of all odd numbers squared: "<<sumsquareodd<<endl;
	}
	else {cout <<"Re-enter a valid range with atleast one number between it"<<endl;
		goto cases;
	}
	//terminate
	return 777;
}
