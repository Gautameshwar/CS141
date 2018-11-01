#include<iostream>
using namespace std;
#include<cstring>

//main fn
int main(){
        string myname="Gautameshwar.S";
        cout<<"Printing string myname using indices method: ";
        for(int i=0;myname[i]!='\0';i++){
                cout<<myname[i];//looping i from 1st element to the last element(i.e) the element before \0
        }
        cout<<endl;
        cout<<"Printing string myname using pointers: ";
        char*p=&myname[0];
        for(int i=0;*(p+i)!='\0';i++){
                cout<<*(p+i);//looping for all pointers from address of first element to the last element
        }
        cout<<endl;
        //terminate the fn
        return 777;
}
