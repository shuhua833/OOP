#include<iostream>
#include<fstream>
using namespace std;
class employee{
	char eid[20],name[20];
	float salary;
	public:
		void getdata()
		{
			cout<<"Enter eid:";
			cin>>eid;
			cout<<"\n Enter name";
			cin>>name;
			cout<<"\nEnter salary";
			cin>>salary;
		}
void add()
{
		ofstream fout;
	employee e;
	int i;
	fout.open("e:\\emp.doc");
	fout<<"eid\t\tname\t\tsalary"<<endl;
	for(i=0;i<10;i++)
	{
		fout<<"ENter the data for employee"<<i+1<<endl;
		e.getdata();
		fout<<e.eid<<"\t\t"<<e.name<<"\t\t"<<e.salary;
	}
	fout.close();
}
};
int main()
{
	employee e1;
	e1.add();
}
