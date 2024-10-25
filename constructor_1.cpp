#include <iostream>
using namespace std;

class Hello{
public:
    Hello(){
    cout<<"This is consrtuctor"<<endl;
    }

    ~Hello(){
    cout<<"This is destructor"<<endl;
    }

    void print(){
    cout<<"Hello world"<<endl;
    }
};

int main ()
{
    Hello obj;
    obj.print();

}
