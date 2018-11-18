#include<iostream>
using namespace std;

class rectangle{
	double l, b;//The private parameters
	public:
	
	rectangle (double x, double y){//constructor fn that defines l and b
		if (x<0||y<0) cout<<"INvalid input!"<<endl;
		else 
			l=x;
			b=y;
	}
	
	double area(){//fn that finds the area
		return l*b;
	}
	
	double perimeter(){//fn that finds the perimeter
		return 2*(l+b);
	}
};

int main(){
	double l, b;
	cout<<"l of rectangle 1: "<<endl;
	cin>>l;
	cout<<"b of rectangle 1: "<<endl;
	cin>>b;
	rectangle r1(l,b);
	cout<<"l of rectangle 2: "<<endl;
	cin>>l;
	cout<<"b of rectangle 2: "<<endl;
	cin>>b;//l and b changes for the second rectangle
	rectangle r2(l,b);
	cout<<"Area of Rectangle 1: "<<r1.area()<<endl//print them all!
			<<"Area of Rectangle 2: "<<r2.area()<<endl<<endl
			<<"Perimeter of Rectangle 1: "<<r1.perimeter()<<endl
			<<"Perimeter of Rectangle 2: "<<r2.perimeter()<<endl;
	return 0;
	
}
