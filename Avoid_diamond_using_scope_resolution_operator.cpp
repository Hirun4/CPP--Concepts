#include <iostream>
using namespace std;
class A{
    int a;
public:

    void set(int x){
      a=x;
    }
    void print(){
    cout<<a<<endl;
    }


};
class B:public A{
    public:
    B(){ set(20);}

};

class C:public A{
    public:
    C(){set(10);}

};

class D:public B,public C{};
int main(){
    D d;
    d.B::print();
    d.C::print();

}
