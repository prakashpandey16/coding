#include<iostream>
using namespace std;
// void fun(int n)
// {
//     if(n==0) return;//base case
//     cout<<"Hello pw"<<endl;// work or kaam
//     fun(n-1);// function call
// }
void greet(int n)
{
    if(n==0) return;
    cout<<"Good morning!"<<endl;
    greet(n-1);

}
int main()
{
    // fun(5);
    int n;
    cin>>n;
    greet(n);
}

