#include <iostream>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

class Rectangle{
	public:
		double a;
		double b;
		double P();
		double S();
		double R();
		Rectangle(double aa,double bb);
		double GetA();
		double GetB();
};
class Triangle:public Rectangle
{
	public:
		double c;
		double P();
		double S();
		double r();
		double R();
		Triangle(double aa,double bb,double cc);
		double GetC();
};
class Rectangle_Paralepiped:public Triangle
{
	public:
		double S();
		double P();
		double V();
		Rectangle_Paralepiped(double aa,double bb,double cc);
}; 


Rectangle::Rectangle(double aa,double bb)
{
	a=aa;
	b=bb;
}
double Rectangle::GetA()
{
	return a;
}
double Rectangle::GetB()
{
	return b;
}
double Rectangle::P()
{
	return 2*(a+b);
}
double Rectangle::S()
{
	return a*b;
}
double Rectangle::R()
{
	return sqrt(a+b);
}


Triangle::Triangle(double aa,double bb,double cc):Rectangle(aa,bb)
{
	c=cc;
}
double Triangle::GetC()
{
	return c;
}
double Triangle::S()
{
	return (a*b)/2;
}
double Triangle::P()
{
	return a+b+c;
}
double Triangle::r()
{
	return 2/c;
}
double Triangle::R()
{
	return (a+b-c)/2;
}

Rectangle_Paralepiped::Rectangle_Paralepiped(double aa,double bb,double cc):Triangle(aa,bb,cc)
{
	
}
double Rectangle_Paralepiped::S()
{
	return 2*((a*b)+(a*c)+(b*c));
}
double Rectangle_Paralepiped::P()
{
	return (2*a)+(2*b);
}
double Rectangle_Paralepiped::V()
{
	return a*b*c;
}

int main(int argc, char** argv) {
	
	Rectangle r(3,5);
	cout<<"S="<<r.S()<<endl;
	cout<<"P="<<r.P()<<endl;
	cout<<"R="<<r.R()<<"r="<<r.R()<<endl;//Formulata e systa za vpisan i opisana okryjnost
	Triangle t(3,4,5);
	cout<<"P="<<t.P()<<endl;
	cout<<"S="<<t.S()<<endl;
	cout<<"r="<<t.r()<<endl;
	cout<<"R="<<t.R()<<endl;
	Rectangle_Paralepiped p(3,4,5);
	cout<<"V="<<p.V()<<endl;
	cout<<"P="<<p.P()<<endl;
	cout<<"S="<<p.S()<<endl;
	
	
	return 0;
}
