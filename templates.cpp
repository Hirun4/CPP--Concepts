#include <iostream>
using namespace std;
template<typename T>
T mymax(T x,T y)
{
    return (x>y)?x:y;
}
int main()
{

    cout<<"MAX="<<mymax<int>(29,11)<<endl;

    cout<<"letter="<<mymax<char>('s','d')<<endl;
}
