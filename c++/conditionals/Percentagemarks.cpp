#include<iostream>
using namespace std;
int main()
{
    int p;
    cout<< "Enter percentage :";
    cin>>p;
    if(p<100 && p>81)
    {
        cout <<"very good";
    }
    else if (p > 61)
    cout << " Good";
    else if (p > 41)
    cout << " Average";
    else 
    cout << "fail";
}