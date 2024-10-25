#include <iostream>
using namespace std;

class dad{
public:
    dad()
    {
    cout<<"Dad of child1 and child 2"<<endl;
    }
};
class child1:public dad{
public:
    child1()
    {
    cout<<"This is child one"<<endl;
    }
};
class child2:public dad{
public:
    child2()
    {
    cout<<"This is child two"<<endl;
    }
};
class grandchild:public child1,public child2{
public:
    grandchild()
    {
    cout<<"Mom of child1 and child 2"<<endl;
    }
};
int main()
{
    grandchild o1;

}

