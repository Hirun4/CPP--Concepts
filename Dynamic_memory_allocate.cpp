#include <iostream>
using namespace std;

int main()
{
    int a=5;

    //Allocate dynamic memory
    int *ptr1 = new int;
    int *ptr2 = new int[5];

    ptr1=&a;

    for(int i=0;i<5;i++){
        *(ptr2+i)=i+1;
    }

    //How to print that value
    cout<<*ptr1<<endl;

    for(int i=0;i<5;i++){
       cout<<*(ptr2+i)<<" ";
   }

    //How to deallocate dynamic memory allocated
    delete  ptr1;
    delete[]  ptr2;

}
