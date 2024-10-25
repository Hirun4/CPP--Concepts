#include <iostream>
using namespace std;

class Employee
{
public:
    int salary=0;
    virtual void calculate_salary()
    {
      salary=0;
      cout<<"Salary="<<salary;
    }
};
class FullTimeEmployee:Employee
{
public:
    void calculate_salary(string name,int s)
    {
      salary=s;
      cout<<name<<" Salary="<<salary<<endl;
    }
};
class PartTimeEmployee:Employee
{
public:
    void calculate_salary(string name,int s,int time)
    {
      salary=s*time;
      cout<<name<<" Salary="<<salary<<endl;
    }
};
class ContractEmployee:Employee
{
public:
    void calculate_salary(string name,int s,int month)
    {
      salary=s*month;
      cout<<name<<" Salary="<<salary<<endl;
    }
};
int main()
{
    FullTimeEmployee a;
    a.calculate_salary("Kamal",60000);

    PartTimeEmployee b;
    b.calculate_salary("Piyal",2000,20);

    ContractEmployee c;
    c.calculate_salary("Damith",30000,2);
}
