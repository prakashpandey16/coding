#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a  number :";
    cin>>n;
    if(n%5==0 || n%3==0)
        cout<< "Given number is divisible by 5 or  3";
        else {
            cout<< "Given number is not  divisible by 5 or  3";
        } 

    }