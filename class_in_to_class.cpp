#include <iostream>
using namespace std;

class outside {
public :
    int x=0;

    class inside {
        public:
        int x=10;
         int func(){
          return x;
        }

};


};
int main()
{
    outside A;
    outside :: inside B;

    cout<<B.func();





}
