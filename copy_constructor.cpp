#include <iostream>
using namespace std;

class Hello{

    string name;
public:

    Hello();

    Hello(string);

    ~Hello(){
        int i=1;
        cout<<"called destructor"<<i<<endl;
        i++;
    }
    void display();
};
Hello :: Hello()
{
   name="_ _ _";

}
Hello :: Hello(string n)
{
    name=n;

}
void Hello :: display()
{
    cout<<"constructor called:"<<name<<endl;
}

int main()
{
    Hello a1,a2("sachith");
    a1.display();
    a2.display();

    Hello a3=a2; //copy constructor

    a3.display();
    a2.display();
}
