#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int x;
    cout<<"Enter target :-> ";
    cin>>x;
    vector<int>v;
    int n;
    cout<<"Enter size of array:->";
    cin>>n;
    
    cout<<"Enter element of array :->";
    for(int i=0; i<n; i++)
    {
        int d;
        cin>>d;
        v.push_back(d);
    }
    for(int i=0; i<=v.size()-2; i++)
    {   for(int j=i+1; j<=v.size()-1; j++)
        { if(v[i] + v[j]==x)
            {  cout<<"("<<i<<","<<j<<")"<<endl;

            }
        }
    }
}
