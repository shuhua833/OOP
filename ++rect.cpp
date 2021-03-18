#include<iostream>
using namespace std;
class rect
{
	private:
		int length , breadth;
		public:
			rect(int l,int b)
			{
				length=l;
				breadth=b;
			}
			void operator ++()
			{
				++length;
				++breadth;
			}
			void display()
			{
				cout<<"lenght="<<length<<endl<<"breadth="<<breadth;
			}
};
int main()
{
	rect r(2,3);
	++r;
	r.display();
}
