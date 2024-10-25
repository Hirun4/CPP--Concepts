#include <iostream>
using namespace std;

int a=100;

void print()
{
    int b=10,a=1;
    cout<<"value of print a: "<< a << endl;
    cout<<"Value of global a: " << :: a << endl;
    cout<<"Value of b: "<< b << endl;
}
int main()
{
    int a=0;
    cout<<"Value of main a: "<< a << endl;

    print();



}
