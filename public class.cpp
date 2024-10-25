#include <iostream>
using namespace std;
class car
{

    string brand;
    string model;
    int year;
};
int main()
{
    car obj;
    obj.brand="toyata";
    obj.model="wagon";
    obj.year=2020;

    cout<<obj.brand;

    return 0;
}
