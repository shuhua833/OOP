#include<iostream>
#include<conio.h>
using namespace std;
template <typename T>void show(T x);
template <typename T1,typename T2>void show(T1 x,T2 y);
int main()
{
	show(500);
	show(4.95);
	show(1,2);
	show("swechha","shrestha");
}

template <typename T>void show(T x)
{
cout<<"generic function with one parameter"<<endl;
	cout<<"x="<<x<<endl;	
}
template <typename T1,typename T2>void show(T1 x,T2 y)
	{
         cout<<"generic function with two parameters"<<endl;
	cout<<"x="<<x<<endl<<"y="<<y<<endl;	
	}
