#include <iostream>
using  namespace std;

void demo()
{
    static int co = 0;
    int c = 0;
    cout << co << " " <<c<<endl;
    co++;
    c++;

}
int main()
{
    for (int i=0;i<5;i++)
    demo();
}

