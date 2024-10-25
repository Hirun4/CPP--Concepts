#include <iostream>
using namespace std;

class time
{
    int hour;
    int min;
public:
    time(int a,int b)
{
    hour=a;
    min=b;
}
    operator int()
{
    return (hour*60+min);
}

};

int main()
{
    time t(3,45);
    cout<<"Time in to minitues"<<t.operator int()<<"min"<<endl;
}
