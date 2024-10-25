#include <iostream>
using namespace std;
template<typename t1,typename t2>
t1 multi(t1 x,t2 y)
{
    return x*y;
}
int main()
{
    cout<<multi<int,double>(2,2.3)<<endl;
    cout<<multi<char,int>('A',2)<<endl;
}
