#include<iostream>
using namespace std;
int main()
{
    int m;
    cout<<"Enter number of rows :->";
    cin>>m;
    int n;
    cout<<"Enter number of column:->";
    cin>>n;

    int p;
    cout<<"Enter number of rows :->";
    cin>>p;
    int q;
    cout<<"Enter number of column:->";
    cin>>q;
    // if  1st matrix column is equal to 2nd matrix row then multiple possible
    if(n==p)
    {
        int a[m][n];
        cout<<"Enter elements of 1st matrix :->";
        for(int i=0; i<m; i++)
        { 
            for(int j=0; j<n; j++)
            {
                cin>>a[i][j];
            }
        }
        cout<<"Enter elements of 2nd matrix :->";
         int b[p][q];
        for(int i=0; i<p; i++)
        { 
            for(int j=0; j<q; j++)
            {
                cin>>b[i][j];
            }
        }
        int res[m][q];
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<q; j++)
            {  res [i][j] = 0;
                for(int k=0; k<p; k++)
                {
                    res[i][j] += a[i][k] * b[k][j];
                }
            }
        }
        for(int i=0; i<m; i++)
        { 
            for(int j=0; j<q; j++)
            {
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else 
    {
        cout<<"Given matrix multiple is not possible :->";
    }

}