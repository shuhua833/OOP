//program that converts object of distance class with data members meter and
// centimeter into object of another distance class with data members feet and inch.
#include<iostream>
using namespace std;
class distance1{
	float cm,m;
	public:
		void getdata(int x,int y)
		{
			cm=y;
			m=x;
		}
		int getM()
		{
			return m;
		}
		int getcm()
		{
			return cm;
		}
};
class distance2{
	float feet,inches;
	public:
		void showdata()
		{
			cout<<"feet is "<<feet<<" inches is "<<inches;
		}
		distance2()
		{
			
		}
	
		distance2(distance1 d)
		{
			feet=d.getM()*3.3;
			inches=d.getcm()*0.4;
		}
};
int main()
{
	distance2 d2;
	distance1 d1;
	d1.getdata(3,20);
	d2=d1;
	d2.showdata();
}
