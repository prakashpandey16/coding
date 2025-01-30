#include<iostream>
using namespace std;
class animal
{
    public:
    void eat()
    {
        cout<<"I can eat"<<endl;
    }
    void sleep()
    {
        cout<<"I can sleep"<<endl;
    }

    
};
class dog : public animal
{
    public:
    void bark()
    {
        cout<<"I can bark";
    }
};
int main()
{
    dog pug;
    pug.eat();
    pug.sleep();
    pug.bark();
}