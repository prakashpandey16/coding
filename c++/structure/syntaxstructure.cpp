#include<iostream>
using namespace std;
struct student{
    int roll;
    int age;
    int marks;
    void read()
    {
     cout<<"Roll = ";
     cin>>roll;
    cout<<"age = ";
    cin>>age;
    cout<<"marks = ";
    cin>>marks;
    }
    void disp()
    {
        cout<<"Given roll number :->"<<roll<<endl;
        cout<<"Given age :->"<<age<<endl;
        cout<<"Given marks :->"<<marks<<endl;
    }

};
int main()
{
    student obj;
   obj.read();
    obj.disp();
}