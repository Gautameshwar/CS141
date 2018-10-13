//load the lib
#include<iostream>
using namespace std;

//to merge 2 arrays
//define arr1 and arr2
//arr1 has i elements and arr2 has j elements
//define totarr with i+j elements
//loop for n from 0 to i+jwith the condition: if n<i then arr1[i] is stored in totarr[n].
//if i<=n<j then arr2[n-i] is stored in totarr[n]

void merger(int arr1[], int arr2[], int totarr[]){
	cout <<"Merged array: [";
	for (int n=0;n<15;n++){
		if (n<7){
			totarr[n]=arr1[n];
			cout<<totarr[n]<<", ";
		}
		else {
			totarr[n]=arr2[n-7];
			cout <<totarr[n];
			if (n<14) {
				cout <<", ";
			}
		}
	}
	cout <<"]"<<endl;
}

//to find the max of the array elements
//define tmax=[0] element
//if [1] >= tmax then tmax=[1]
//loop this for all []of the array
int maxer(int arr[]){
	int tmax=arr[0];
	for (int i=0;i<15;i++){
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
	for (int i=0;i<15;i++){
		if (arr[i]<=tmin)
			tmin=arr[i];
	}
	return tmin;
}

//main fn
int main(){
int arr1[7]={1, 3, 4, 2, 5, 8, 6}, arr2[8]={9, 12, 54, 11, 26, 50, 21, 44}, totarr[15];
	cout <<"Array 1: [1, 3, 4, 2, 5, 8, 6]"<<endl;
	cout <<"Array 2:[9, 12, 54, 11, 26, 50, 21, 44]"<<endl;
	merger(arr1, arr2, totarr);
	cout <<"Maximum number of merged array: "<<maxer(totarr)<<endl;
	cout <<"Minimum number of merged array: "<<miner(totarr)<<endl;
	return 777;
}
