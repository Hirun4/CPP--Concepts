#include <iostream>
using namespace std;
class A{};
class B:public A{};
int main()
{
    A b;
    try{
    throw b;
    }
    catch (B a){
    cout<<"q"<<endl;
    }
    catch (A a){
    cout<<"a"<<endl;
    }
}
