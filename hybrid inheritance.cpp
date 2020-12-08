#include<iostream>
#include<conio.h>
using namespace std;
class A{
	protected:
		int roll;
		public:
			void get_roll(int x)
			{
				roll=x;
			}
			void put_roll()
			{
				cout<<"roll no "<<roll<<endl;
			}
};
class B:public A
{
	protected:
		float marks1,marks2;
		public:
			void get_marks(float y,float z){
				marks1=y;
				marks2=z;
			}
			void put_marks()
			{
				cout<<"marks1="<<marks1<<endl;
				cout<<"marks2="<<marks2<<endl;		
					}
};
class sports{
	protected:
		float sports_marks;
		public:
			void get_sports_marks(int w){
				sports_marks=w;
			}
			void put_sports_marks()
			{
				cout<<"sports marks="<<sports_marks;
			}
};
class C:public B,public sports{
private:
float total;
public:
void display()
{
total=marks1+marks2+sports_marks;
cout<<endl<<"total marks is:"<<total;
}
};
int main(){
class C obj;
obj.get_roll(110);
obj.get_marks(50,70);
obj.get_sports_marks(30);
obj.put_roll();
obj.put_marks();
obj.put_sports_marks();
obj.display();
getch();
return 0; }


