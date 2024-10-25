#include <iostream>
#include <cassert>
using namespace std;

class list
{
    int length;
    int *array;
    public:
    list()
    {
        length = 10;
       assert(array !=0);
        array=new int[length];
        for(int i=0;i<length;i++){
            array[i]=0;
          }

    }

    list(int size)
    {
        length = size;
        if(length<=0){
            array=0;
        }
        else{
         array=new int[length];
         for(int i=0;i<length;i++){
            array[i]=3;
          }
       }
    }

    display()
    {
        int length;
        for(int i=0;i<length;i++){
            cout<<array[i]<<" "<<endl;
        }
    }

    set()
    {
        for(int i=0;i<length;i++){
            array[i]=i+2;
        }
    }

    ~list()
    {
        delete[] array;
        cout<<"called destructor"<<endl;
    }
};

int main()
{
    list a;
    a.display();



}
