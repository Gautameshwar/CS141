//include the lib
#include<iostream>
using namespace std;
#include<cmath>
//main fn
int main(){
	//the number must be a perfect square means the tuunc and the value must be the same
	//the number must be a sum of a series from 1 to n for some n in integers.
	//first sum the nos for a fixed n
	//then check if it is a perfect square
	//if it is then print it
	//else do the same for the next value of n
	//loop
	int lim=1;//lim is defined to run the loop to get lim no of numbers satisfying our condition
	long n, sum=0;//numbers exceed the int range
	for (n=1;lim<=7/*finding 7 numbers that fall under this category*/;n++/*tries the same summation for the next consecutive n*/){
		for (int i=1;i<=n;i++){//summing loop
			sum+=i;
		}
		if (sqrt(sum)==trunc(sqrt(sum))/*our condition for sum to be a perfect square*/){cout <<lim<<": "<<endl<<sum<<" as the sum of series from 1 to "<<n<<" and perfect square of: "<<sqrt(sum)<<endl;
			lim++;
			sum=0;//resets the sum to 0 so that the summation of the next n doesnot double count the previous summation!
		}
		else {sum=0;}//resets the sum to 0 so that the summation of the next n doesnot double count the previous summation(got to do this even if the sum is not a perfect square)!
	}
	//terminate the fn
return 777;
}

//to be honest this pgm was quite interesting... gives an idea of how powerful computers can turn out to be!:o!
