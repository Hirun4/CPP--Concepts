#include <iostream>
using namespace std;

class rectangle {

    int width;
    int height;
public:
    rectangle()
    {
        width=0;
        height=0;
    }

    rectangle(int w)
    {
        width=w;
        height=2;
    }

    rectangle(int h,int w)
    {
        width=w;
        height=h;

    }

    ~rectangle()
    {
        cout<<"Destructor called"<<endl;
        cout<<height<<" "<<width<<endl;
    }

    area();
};

rectangle :: area()
{
    int result;
    result= height*width;
    cout<<"Area = "<<result<<endl;
}

int main()
{
    rectangle A;
    A.area();

    rectangle B(4);
    B.area();

    rectangle C(5,4);
    C.area();


}
