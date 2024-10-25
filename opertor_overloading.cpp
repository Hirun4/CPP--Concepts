#include <iostream>
using namespace std;
class number
{
    int num;
public:
    number(int n):num(n){}

    void display()
    {
        cout<<"number:"<<num;
    }
    void operator -()
    {
        this->num=-num;
    }
};
int main()
{
    number a(10);
    -a;
    a.display();
}
