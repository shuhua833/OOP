#include<iostream>
using namespace std;
class A
{
protected:
int m;
public:
void get_m(int x);
};
void A :: get_m(int x)
{
m=x;
}
class B
{
protected:
int n;
public:
void get_n(int y);
};
void B :: get_n(int y)
{
n=y;
}
class C : public A, public B
{
public:
void display();
};
void C :: display()
{
cout<<"the value of m is:"<<m<<endl;
cout<<"the value of n is:"<<n<<endl;
cout<<"the sum of a and b is:"<<m+n<<endl;
}
int main() {
class C obj;
obj.get_m(5);
obj.get_n(7);
obj.display();
return 0; 
}
