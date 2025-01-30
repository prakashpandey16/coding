#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a  number : ";
    cin>>n;
    bool flag = true ;// true means prime  number 

    for(int i=2; i<n; i++)
    {
        if(n%i==0)
        {
          flag = false ;
          break; 
        }
    }
    if (n==1) cout << "1 is neither a prime nor composite ";
    else if(flag == true)
        cout << "Given  number is prime number ";
    else 
         cout << " Given number is composite number ";
}