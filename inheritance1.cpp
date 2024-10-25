#include <iostream>
using namespace std;

class vehical{

public:
    vehical()
    {
        cout<<"First call vehical"<<endl;

    }
};
class car:public vehical{

public:
    car()
    {
        cout<<"This vehical is car"<<endl;

    }
};
class bmw:public car{

public:
    bmw()
    {
        cout<<"This car is BMW"<<endl;

    }
};
int main()
{
    bmw o;

}
