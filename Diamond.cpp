#include <iostream>
using namespace std;

class person
{
protected:
    int age;
public:
    person(int x):age(x)
    {
        cout<<"I am person "<<x<<endl;
    }


};

class student : public person
{
public:
    student(int x):person(x)
    {
        cout<<"I am student "<<x<<endl;
    }
};

class faculty : public person
{
public:
    faculty(int x):person(x)
    {
        cout<<"This is faculty "<<x<<endl;
    }
};

class TA : public student,public faculty
{
public:
    TA(int x):student(x),faculty(x)
    {
        cout<<"This is TA "<<x<<endl;
    }
};
int main()
{
    TA p(1);
}
