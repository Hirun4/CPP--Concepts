#include <iostream>
using namespace std;
class mammals
{
public:

    void function1()
    {
        cout<<"I am mammal"<<endl;
    }
};
class marineanimals
{
public:

    void function2()
    {
        cout<<"I am a marine animal"<<endl;
    }

};
class bluewhale:public mammals,public marineanimals
{
public:

    void function3()
    {
        cout<<"I belong to both the categories:Mammals as well as Marine Animals"<<endl;
    }
};
int main()
{
    mammals mammal;
    mammal.function1();

    marineanimals marineanimal;
    marineanimal.function2();

    bluewhale bluewhale;
    bluewhale.function3();

    bluewhale.function1();
    bluewhale.function2();


}

