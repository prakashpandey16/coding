#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> V; 
    // method ->1
    // for(int i=0; i<5; i++)
    // {
    //     cin>>V[i];

    // }
    // for(int i=0; i<5; i++)
    // {
    //     cout<<V[i]<<" ";
    // }
    // method -> 2
    int n;
    cout<<"Enter size of array :->";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        V.push_back(x);
    }
      for(int i=0; i<n; i++)
    {
        cout<<V[i]<<" ";
    }

}

