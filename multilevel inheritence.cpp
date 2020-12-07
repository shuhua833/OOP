#include<iostream>
using namespace std;
class A
{
protected:
int roll;
public:
void get_roll(int x)
{
roll=x;
}
void put_roll()
{
cout<<"roll no is:"<<roll<<endl;
}
};
class B : public A
{
protected:
float marks1,marks2;
public:
void get_marks(float y, float
z)
{
marks1=y;
marks2=z;
}
void put_marks()
{
cout<<"marks1:"<<marks1<<endl;
cout<<"marks2:"<<marks2<<endl;
}
};
class C : public B
{
private:
float total;
public:
void display()
{
total=marks1+marks2;
cout<<endl<<"total marks is:"<<total;
}
};
int main()
{
class C obj;
obj.get_roll(110);
obj.put_roll();
obj.get_marks(90,99);
obj.put_marks();
obj.display();
return 0;
}
