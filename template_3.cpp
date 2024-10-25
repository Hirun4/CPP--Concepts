#include <iostream>
using namespace std;
template<typename T,int x>
    T func1(T y)
{
    return y+x;
}

template<typename T,int x>
    T func2(T y)
{
    return y*x;
}

int main()
{
    cout<<func1<int,10>(20)<<endl;
    cout<<func2<int,1>(2)<<endl;
}
