#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number :";
    cin>>n;
    int a=1;
    // 1 2 4 8 .....
    int i=1;
    do 
    {
        cout <<a << endl;
        a = a*2;
        i++;
        
    } while(i<=n);
}