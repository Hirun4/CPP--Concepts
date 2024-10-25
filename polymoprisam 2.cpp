#include <iostream>
using namespace std;

class person
{
protected:
    string name;
    int age;
    static int nextID;
    virtual void getdata()
    {
        cout<<"give me correct data"<<endl;
    }
    virtual void putdata(){}
};
    int person::nextID=1;

class doctor:person
{
protected:
    int doctor_specialist,doctor_id=nextID;
public:

    void getdata()
    {
        cout<<"Enter name:";
        cin>>name;
        cout<<"Enter age:";
        cin>>age;
        cout<<"Enter specialist:";
        cin>>doctor_specialist;

    }
    void putdata()
    {
        cout<<"doctor name:"<<name<<"   age:"<<age<<"   special:"<<doctor_specialist<<endl;
    }
};
class patient:person
{
protected:

    string addmission_date;
    int patient_id;

public:
    void getdata()
    {
     cout<<"Enter name:";
     cin>>name;
     cout<<"Enter age:";
     cin>>age;
     cout<<"Enter addmission date:";
     cin>>addmission_date;
    }
    void putdata()
    {
        cout<<"patient name:"<< name<<"   age:"<< age<<"   patient_id:"<<nextID++<<endl;
    }
};
int main()
{
    doctor a;
    a.getdata();
    a.putdata();

    patient b;
    b.getdata();
    b.putdata();
}
