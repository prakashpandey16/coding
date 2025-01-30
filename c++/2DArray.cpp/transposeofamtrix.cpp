#include<iostream>
using namespace std;
int main()
{
    int arr[3][4] = {1,2,3,4,9,8,7,6,9,4,5,3};
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<4; j++)
        {
             cout<<arr[i][j]<<" ";
        }
      cout<<endl;
    }
    cout<<"Transpose matrix is :->"<<endl;;
    for(int j=0; j<4; j++)
    {
        for(int i=0; i<3; i++)
        {
            cout<<arr[i][j]<<" ";
            
        }
        cout<<endl;
    }
}