#include <iostream>
using namespace std;
class car
{
    int year;
    string brand;

public:
    void setbrand(string b)
    {
      brand=b;
    }
    string getbrand()
    {
        return brand;
    }
    void setyear(int y)
    {
        year=y;
    }
    int getyear()
    {
        return year;
    }
    void display()
    {
        cout<<"Car brand:"<<getbrand()<<"\t"<<"Year:"<<getyear()<<endl;
    }
};
int main()
{
    car car1;
    car1.setbrand("BMW");
    car1.setyear(2020);
    car1.display();
}
