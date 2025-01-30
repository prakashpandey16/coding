#include<iostream>
using namespace std;
int Binary_to_Decimal(string & s)
{
    int n = s.size();
    int result = 0;
    for(int i=n-1;i>=0;i--)
    {
        char ch = s[i];
        int num = ch -'0';
        result = result + num * (1<<(n-i-1));
    }
    return result;
}
string Decimal_to_Binary(int num)
{
    string result = " ";
    while(num>0)
    {
        if(num%2==0)
        {
            result = "0" + result;
        }
        else {
            result ="1"+ result;
        }
        num/=2;
    }
    return result;
}
int main()
{
    string s = "001101";
    cout<<Binary_to_Decimal(s)<<endl;
    int n = 13;
    cout<<Decimal_to_Binary(n);
    
}