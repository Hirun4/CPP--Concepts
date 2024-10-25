#include <iostream>
using namespace std;
char ABC(char Y)
{
    if('A'<=Y&&Y<='Z'){
        return Y;
    }
    throw int(Y);
}
int main()
{
    try
    {
        char ch='1';
        cout<<ABC(ch);
    }
    catch(int x)
    {
        cout<<x<<endl;

    }
}
