#include <iostream>
using namespace std;

class time
{
public:
    int hour,min;

    time(int h,int m):hour(h),min(m){}

    int mins()
    {
        return ((hour*60)+min);
    }
};
class minitues
{
    int mins;
public:
    minitues(){}
public:
    operator=(time T)
    {
        mins=T.min;
    }
    void show()
    {
        cout<<"Total min:"<<mins<<endl;
    }

};
int main()
{
    time a(3,40);
    cout<<"minitues="<<a.mins()<<endl;

    minitues b;
    b.show();
    b=a;
    b.show();
}
