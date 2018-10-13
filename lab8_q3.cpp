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

//to find kth smallest and kth largest element of an array
//sort the array first
//then print sortarr[k-1]for kth smallest value and sortarr[7-k] for kth largest value

void sorter(int arr[], int k){
	cout <<"Sorted array: [";
	int sortarr[7];
	int tbig=maxer(arr), tmin=miner(arr);
	for (int j=0; j<7; j++){
		if (j==0){//first element of sortarr is always miner(arr)!
			sortarr[j]=tmin;
			cout<<tmin;
			}
		else{
			for (int i=0;i<7;i++){
				if (arr[i]<tbig && arr[i]>sortarr[j-1])//this condition makes sure that the element is greater than jth smallest value
					tbig=arr[i];//this gives the jth smallest no if this is looped for all i since this loop doesnt run for other i's once tbig has reached jth smallest value(i.e)arr[i]<tbig is violated! 
			}
			tmin=tbig;//saving the jth smallest elment in tmin
			tbig=maxer(arr);//reseting tmax for the next loop
			sortarr[j]=tmin;//assigning jth smallest element of sortarr
			cout <<","<<tmin;
		}
	}
	cout <<"]"<<endl;;
	cout<<k<<"th smallest element of the array is:"<<sortarr[k-1]<<endl;
	cout<<k<<"th largest element of the array is:"<<sortarr[7-k]<<endl;
}

//main fn
int main(){
	int arr[7]={9, 5, 6, 7, 3, 2, 4};
	int k;
	cout <<"Array: [9, 5, 6, 7, 3, 2, 4]"<<endl;
	cases:
	cout <<"Type a number k to find the kth largest nd smallest element of this array: ";
	if(k>7){
		cout <<"Invalid input! The value must be between 1 and 7."<<endl;
		goto cases;
	}
	else {
		cin>>k;
		sorter(arr, k);
		return 777;
	}
}
