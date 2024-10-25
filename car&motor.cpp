#include <iostream>
using namespace std;
class engine{
    int cylinders;//number of cylinders
    double capacity;//capacity in liters

public:
    engine(int c,double l);

};

engine :: engine (int c, double l):cylinders(c),capacity(l)
{
    cout<<"constructor engine intilizing finished"<<endl;
    cout<<"cylinders in engine:"<<cylinders<<endl;
    cout<<"fuel capacity in engine:"<<capacity<<endl;

}

class car{
    int Mnumber;
    engine motor;

public:
    car(int m,int c,double l);

};
car :: car(int m,int c,double l):Mnumber(m),motor(c,l)
{
    cout<<"Constructor Car finished initializing"<<endl;
    cout<<"Model of car:"<<Mnumber<<endl;
}
int main()
{
    car c(12390,4,5.5);
}
