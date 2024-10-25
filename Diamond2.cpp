#include <iostream>
using namespace std;
class A
{
    int x;
public:
    void set(int i)
    {
       x=i;
    }
    void print(){
    cout<<x;
    }
};

class B:virtual public A
{
    public:
    B(){set(10);}
};
class C:virtual public A
{
    public:
    C(){set(20);}
};
class D:public B,public C{};
int main()
{
    D d;
    d.print();

}
