#include<iostream>
using namespace std;
class A{
	protected:
		int adata;
	public:
	A(int a){
		cout<<"Class A"<<endl;
	  adata=a;	
	}
};
class B:public A{
	protected:
		int bdata;
	public:
		B(int a,int b):A(a){
			cout<<"Class B"<<endl;
			bdata=b;
		}
};
class C:public B{
	private:
		int cdata;
	public:
		C(int a,int b,int c):B(a,b){
			cout<<"Class C"<<endl;
	     cdata=c;		
		}
		void showdata()
		{
			cout<<"a="<<adata<<endl<<"c="<<cdata<<endl<<"b="<<bdata;
		}
};
int main()
{
    C	C(2,3,4);
	C.showdata();
	return 0;
}
