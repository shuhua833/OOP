#include<iostream>
using namespace std;
class A{
	protected:
		int adata;
		public:
			A(int a)
			{
				adata=a;
			}
};
class B{
	protected:
		int bdata;
		public:
			B(int b)
			{
				bdata=b;
			}
};
class C:public A,public B
{
	int cdata;
	public:
		C(int a,int b,int c):A(a),B(b)
		{
			cdata=c;
		}
		public:
		void showdata()
		{
			cout<<"a="<<adata<<endl<<"b="<<bdata<<endl<<"c="<<cdata;
		}
};
int main()
{
	class C obj(100,200,300);
	obj.showdata();
}
