#include <iostream>
using namespace std;
int main()
{
    int x=0;
    try
    {
        if(x<=0){

            cout<<"X throw to catch..."<<endl;
            throw x;
        }
    }
    catch(int x)
    {
        cout<<"I am catch 'x' "<<x<<endl;

    }

}
