#include<iostream>
using namespace std;
class student
{
	int sid;
	float marks;
	public:
		student(int i,float j)
		{
			sid=i;
			marks=j;
		}
		student(student &s)
		{
			sid=s.sid;
			marks=s.marks;
			
		}
		void showdetails()
		{
			cout<<"student ID:"<<sid<<endl<<"marks"<<marks<<endl;
		}
};
int main()
{
	student s1(3,70);
	student s2(s1);
	s1.showdetails();
	s2.showdetails();
}
