#include <iostream>
using namespace std;
class circle{
    double radius;
public:
    circle(double r):radius(r){}

    double area()
    {

       return 3.14*radius*radius;
    }
};

class cylinder{
    double height;
    circle base;
public:
    cylinder(double h,double r):height(h),base(r){}

    double volume()
    {
        return base.area()*height;
    }
};

int main()
{
    circle a(7);
    cylinder b(10.10,7);
    cout<<"area of base circle:"<<a.area()<<endl;
    cout<<"Volume of cylinder:"<<b.volume()<<endl;
}
