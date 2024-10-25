#include <iostream>
using namespace std;
template <typename t,int max>
int arraymin(t array[],int n)
{
    int m=max;
    for(int i=0;i<n;i++){
        if(array[i]<m){
            m=array[i];
        }
    }
    return m;
}
int main()
{
    int array1[]={1,2,3,4,5};
    char array2[]={2,10,20,5};
    int n1=sizeof(array1);
    int n2=sizeof(array2);
    cout<<arraymin<int,10>(array1,n1)<<endl;
    cout<<arraymin<char,256>(array2,n2)<<endl;
    return 0;
}
