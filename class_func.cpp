#include <iostream>
using namespace std;

int a=3;

class X {
    int a;

public :
    X(){
    a=0;
    }
    int increment_a(){
    return a++;
    }

    print(){
    cout<<"X-a = "<<a<<endl;
    }
}b;

int main()
{
    int a=40;
    cout<<"main a value:"<< a << endl;
    cout<<"Value of global a:"<<::a<<endl;

    a=b.increment_a();
    a=b.increment_a();
    b.print();
    cout<<"value of a:"<<a<<endl;


}
