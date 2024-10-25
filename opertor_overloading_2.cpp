#include <iostream>
using namespace std;
class number {
    unsigned int count;
public:
    number():count(0){}
    void operator++()
    {
        ++count;
    }

    void display()
    {
        cout<<"count:"<<count;
    }
};
int main()
{
    number a;
    ++a;
    a.display();
}
