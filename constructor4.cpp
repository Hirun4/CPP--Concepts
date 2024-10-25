#include <iostream>
using namespace std;
class destroy
{
    int id;
    string msg;
public:
    destroy(int,string);

    ~destroy();
};
destroy :: destroy(int i,string m):id(i),msg(m)
{


    cout<<"constructor run"<<" "<<i<<" "<<m<<endl;
}
destroy :: ~destroy()
{
    cout<<"destructor run"<<" "<<id<<" "<<msg<<endl;
    cout<<"end run desconstructor"<<endl;
}
int main()
{
    cout<<"start execute main function"<<endl;
    destroy a(001,"constructor 1 run");
    destroy b(002,"constructor 2 run");
    destroy c(003,"constructor 3 run");

    cout<<"end run constructor"<<endl;
}
