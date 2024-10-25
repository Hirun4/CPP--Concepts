#include <iostream>
using namespace std;

class time
{
    int hour;
    int mins;
public:
    time()
    {
        cout<<"defult constructor"<<endl;
    }
     time(int t)
    {
        hour=t/60;
        mins=t%60;
    }
    void display()
    {
        cout<<"TIME"<<endl;
        cout<<hour<<":"<<mins<<endl;
    }
};
int main()
{
    int T;

    cout<<"Enter time in mins:";
    cin>>T;
    time t(T);

    t.display();
}
