#include <iostream>
using namespace std;
class complex{
public:

    int real1;
    int noreal1;

    int real2;
    int noreal2;

  int sumreal(int r1,int r2)
  {
     real1=r1;
     real2=r2;
     return real1+real2;
  }

  int sumnoreal(int n1,int n2)
  {
     noreal1=n1;
     noreal2=n2;
     return noreal1+noreal2;
  }
  int differencereal(int r1,int r2)
  {
     real1=r1;
     real2=r2;
     return real1-real2;
  }
  int differencenoreal(int n1,int n2)
  {
     noreal1=n1;
     noreal2=n2;
     return noreal1-noreal2;
  }

};
int main()
{
    int i1=0,i2=0,j1=0,j2=0;
    complex c1;
    cout<<"Enter first complex num real part:";
    cin>>i1;
    cout<<"Enter first complex num noreal part:";
    cin>>j1;
    cout<<"Enter second complex num real part:";
    cin>>i2;
    cout<<"Enter second complex num noreal part:";
    cin>>j2;

    cout<<"result = "<<c1.sumreal(i1,i2)<<"+("<<c1.sumnoreal(j1,j2)<<")i"<<endl;
    cout<<"result = "<<c1.differencereal(i1,i2)<<"+("<<c1.differencenoreal(j1,j2)<<")i"<<endl;
}
