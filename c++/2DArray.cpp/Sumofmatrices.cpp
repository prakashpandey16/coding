#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int arr[2][3] = {{2,5,3},{5,9,10}};
    int brr[2][3] = {{3,11,12},{9,34,42}};
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
           brr[i][j] +=arr[i][j];
           cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }
}


   