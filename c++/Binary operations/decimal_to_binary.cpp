#include<iostream>
#include<string>
using namespace std;
string Binary_to_decimal(int &num)
{
    string result = " ";
    while(num>0)
    {
        if(num%2==0)// bcz even number LSB is 0 // LSB -> least significant bit
        {
            result = "0" + result;
        }
        else {//bcz odd number LSB is 1
        result = "1" + result;

        }
        num/=2;
    }
    
    return result;
}
int main()
{
    int num;
    cin>>num;
    cout<<Binary_to_decimal(num);
}
