#include<iostream>
using namespace std;
int main()
{
    int arr[3][4] = {3,5,34,4,3,10,12,14,13,10,15,18};
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<4; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    int trans[4][3];
        for(int i=0; i<4; i++)
           {
             for(int j=0; j<3; j++)
            {
            trans[i][j] = arr[j][i];
           
             }
           }
      for(int i=0; i<4; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<trans[i][j]<<" ";
        }
        cout<<endl;
    }

}