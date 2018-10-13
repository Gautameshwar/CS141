//load the lib
#include<iostream>
using namespace std;

//to find sum of all array elements
//define the array
//define add that stores the sum
//keep on adding all the array elements in a loop to add
//also tell the user what array he is operating on!
int summer(int arr[]){
	int add;
	for (int i=0;i<7;i++){//to loop the addition for all the array elements
		add+=arr[i];
	}
	return add;
}
//main fn
int main(){
	int arr[7]={7, 11, 15, 19, 23, 27, 31};
	cout <<"The sum of all the elements in the array: [7, 11, 15, 19, 23, 27, 31] is: ";
	cout <<summer(arr)<<endl;
	//terminate the fn
	return 777;
}
