#include<iostream>
using namespace std;
class Base
{
public :
    int x, y;
public:
    Base(int i, int j)
    {
        x = i;
        y = j;
    }
};
class Derived : public Base
{
public:
    Derived(int i, int j):Base(i,j) {}

    void print()
    {
        cout << x <<" "<< y;
    }
};
int main(void)
{
    Derived q(10, 10);
    q.print();
    return 0;
}
