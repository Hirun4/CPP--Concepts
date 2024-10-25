#include <iostream>
using namespace std;

class outside{
public :
    int x=0;

    class inside {
    public :
        int x=5;

        static int y;
        int func(){
        return x;
        }
    };
};
int outside :: inside :: y=10;
int main()
{
    outside A;
    outside :: inside B;
    cout<< B.func() << endl;
    cout << B.y << endl;

}
