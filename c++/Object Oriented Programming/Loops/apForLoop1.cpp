#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number : ";
    cin>>n;
// 4 7 10 13 .....
for (int i=4; i<=3*n-1; i+=3)
{
    cout << i << endl;
}
}