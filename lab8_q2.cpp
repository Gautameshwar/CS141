//load the lib
#include<iostream>
using namespace std;

//to find the max of the array elements
//define tmax=[0] element
//if [1] >= tmax then tmax=[1]
//loop this for all []of the array
int maxer(int arr[]){
	int tmax=arr[0];
	for (int i=0;i<7;i++){
		if (arr[i]>=tmax)
			tmax=arr[i];
	}
	return tmax;
}

//to find the min of the array elements
//define tmin=[0]
//if [1] >= tmin then tmin=[1]
//loop this for all []of the array
int miner(int arr[]){
	int tmin=arr[0];
	for (int i=0;i<7;i++){
		if (arr[i]<=tmin)
			tmin=arr[i];
	}
	return tmin;
}

//to find the mean of the arr
//sum all the [i] in arr
//divide the sum by 7
float meaner(int arr[]){
	float sum=0;
	for (int i=0;i<7;i++){
		sum+=arr[i];
	}
	return sum/7;
}

//to find the median of arr
//first it is required to define a new array that arranges all the elements in increasing order
//so the [0] of this array is miner(arr[])
//now the same condition runs for all []\[0]
//therefore the no finds the no whichruns in a loop that compares it with the condition []>tmin &&[]<=[i]
//this now gets stored in the [1] of the newarr
int meader(int arr[]){
	cout <<"Sorted array: [";
	int sortarr[7];
	int tbig=maxer(arr), tmin=miner(arr);
	for (int j=0; j<7; j++){
		if (j==0){//first element of sortarr is always miner(arr)!
			sortarr[j]=tmin;
			cout<<tmin;
			}
		else{
			for (int i=j;i<7;i++){
				if (arr[i]<tbig && arr[i]>=sortarr[j-1])//this condition makes sure that the element is greater than jth smallest value
					tbig=arr[i];//this gives the jth smallest no if this is looped for all i since this loop doesnt run for other i's once tbig has reached jth smallest value(i.e)arr[i]<tbig is violated! 
			}
			tmin=tbig;//saving the jth smallest elment in tmin
			tbig=maxer(arr);//reseting tmax for the next loop
			sortarr[j]=tmin;//assigning jth smallest element of sortarr
			cout <<","<<tmin;
		}
	}
	cout <<"]"<<endl;;
	return sortarr[3];
}

//to find the frequency of an element in array
//define n and count
//n is set to nth element in every loop of i from 1 to 6
//if [i]==n then count++
//repeat this for every n and print the frequency table
void moder(int arr[]){
	int count, n;
	for (n=0;n<7;n++){
		count=0;
		for (int i=0;i<7;i++){
			if (arr[i]==arr[n])
				count++;
		}
		cout<<"The frequency of "<<arr[n]<<" in the array is: "<<count<<endl;
	}
}

//main fn
int main(){
	int arr[7]={7, 13, 25, 9, 3, 4, 10};
	cout <<"Array: [7, 13, 25, 9, 3, 4, 10]"<<endl;
	cout <<"Max: "<<maxer(arr)<<endl;
	cout <<"Min: "<<miner(arr)<<endl;
	cout <<"Mean: "<<meaner(arr)<<endl;
	cout <<"Median: "<<meader(arr)<<endl;
	cout <<"Frequency table: "<<endl;
	moder(arr);
	return 777;
}
