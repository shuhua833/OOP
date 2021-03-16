#include<iostream>
using namespace std;
 
class NUM
{
    private:
        int n;
         
    public:
        void getNum(int x)
        {
            n=x;
        }
        void dispNum()
        {
            cout << "value of n is: " << n;
        }
        void operator - ()
        {
            n=-n;
        }
};

int main()
{
    NUM num;
    num.getNum(10);
    -num;
    num.dispNum();
    cout << endl;
    return 0;
     
}
