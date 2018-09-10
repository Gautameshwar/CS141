//load the lib
#include<iostream>
using namespace std;

//to upper case fn
char toupper(char a){
	int i=a;
	i-=32;
	return i;
}

//to lower case fn
char tolower(char a){
	int i=a;
	i+=32;
	return i;
}

//main fn
int main(){
	char a;
	cases:
	cout <<"Type an alphabet: ";
	cin >>a;
	int i(a);
	if (i >='a' && i<='z'){
		toupper(a);
		cout <<"The alphabet typed is in lower case. The upper case of this alphabet is: "<<toupper(a)<<endl;
	}
	else if (i>='A' && i<='Z'){
		tolower(a);
		cout <<"The alphabet typed is in upper case. The lower case of this alphabet is: "<<tolower(a)<<endl;
	}
	else {
		cout <<"The typed character is not an alphabet. Re-enter an alphabet."<<endl;
		goto cases;
	}
	return 777;
}
