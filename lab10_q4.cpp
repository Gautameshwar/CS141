//load the lib
#include <iostream>
using namespace std;

//define class point
class point{
	int xc, yc;//x and y cordinates are private
	public:
	point(){//constructor that saves xc and yc with default value if no input is given
	xc=0;
	yc=0;
	}
	point(int x, int y){//constructor that saves xc and yc as the inputted value
		xc=x;
		yc=y;
	}
	void move(int dx, int dy){//adds inputted values to xc and yc
		xc+=dx;
		yc+=dy;
	}
	int getx(){//returns xc
		return xc;
	}
	int gety(){//returns yc
		return yc;
	}
	void setx(int x){//alters xc
		xc=x;
	}
	void sety(int y){//alters yc
		yc=y;
	}
	void print(){//prints (xc,yc)
		cout <<"("<<xc<<","<<yc<<")"<<endl;
	}
};

class rectangle{
	point p1, p2, p3, p4;//private corners of the rectangle
	int side1(){//computes breadth
		return p2.gety()-p1.gety();
	}
	int side2(){//computes length
		return p3.getx()-p2.getx();
	}
	public:
	rectangle(point pl, point pu){
		p1.setx(pl.getx());//if upper corner is (a, b) and lower corner is (c, d) then p1 is (c, d)
		p1.sety(pl.gety());
		p2.setx(pl.getx());//p2 is (c, b)
		p2.sety(pu.gety());
		p3.setx(pu.getx());//p3 is (a, b)
		p3.sety(pu.gety());
		p4.setx(pu.getx());//p4 is (a, d)
		p4.sety(pl.gety());
	}
	rectangle(){
		p1.setx(0);//p1 is (0, 0)
		p1.sety(0);
		p2.setx(0);//p2 is (0, 1)
		p2.sety(1);
		p3.setx(1);//p3 is (1, 1)
		p3.sety(1);
		p4.setx(1);//p4 is (1, 0)
		p4.sety(0);
	}
	void print(){//prints the corner cordinates
		cout<<"Cordinates of rectangle: "<<endl;
		p1.print();
		p2.print();
		p3.print();
		p4.print();
	}
	int area(){//computes the area
		return side1()*side2();
	}
	
};

//main fn
int main(){
	int x, y;//define x and y that gets overwritten everytime we input a rectangle cordinate
	cout<<"x and y cordinates of lower left corner: ";
	cin>>x>>y;
	point p1(x,y);
	cout<<"x and y cordinates of upper right corner: ";
	cin>>x>>y;//here x and y are overwritten
	point p3(x, y);
	rectangle rect1(p1, p3);//define rectangle with p1 and p3 as inputs
	rect1.print();//print the corners
	cout<<endl<<"Area of rectangle: "<<rect1.area()<<endl;//print the area
	return 0;//terminate the fn
}
