#include<iostream>
using namespace std;
class student
{ int roll,m1,m2,m3;
    float p;
    public:


void read()
{ 
    cin>>roll>>m1>>m2>>m3;
}
void  cal()
{
    p =( m1 + m2 + m3)/3;
}
void disp()
{
    cal();
    cout<<"Enter roll number :->"<<roll<<endl;
    cout<<"percentage :->"<<p;
    
}

};
int main()
{
    student obj;
    obj.read();
    obj.disp();
    return 0;
 
};
    