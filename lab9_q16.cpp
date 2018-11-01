#include<iostream>
using namespace std;
//main fn
int main(){
	char str[20], *p;
	cout << "Input about 10 characters of string\n";
	cin >> str;
	p=str;
	int i;
	for(i=0;*(p+i)!='\0';i++){//this loop indirectly stores the length of the string
	}
	for(i-=1;i>=0;i--){//this loop starts from the char before '\0'(i-=1)and prints all p from p+(i-1) to p
		cout<<p+i<<endl;
	}
	return 0;
}
