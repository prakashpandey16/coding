#include<iostream>
#include<vector>
#include<climits>
using namespace std;
void display(vector<int>&a)
{
    int n = a.size();
   for(int i=0; i<n; i++)
   {
    cout<<a[i]<<" ";
   }
   cout<<endl;
}
void ThreeGreatest(vector<int>& b)
{
    int n = b.size();
    int max = INT_MIN;
    int smax = INT_MIN;
    int tmax = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (b[i] > max) {
            tmax = smax;
            smax = max;
            max = b[i];
        }
        else if (b[i] > smax && b[i] != max) {
            tmax = smax;
            smax = b[i];
        }
        else if (b[i] > tmax && b[i] != max && b[i] != smax) {
            tmax = b[i];
        }
    }

    if (tmax == INT_MIN) {
        // Less than three unique elements found
        cout << "Less than three unique elements in the array";
    } else {
        cout << max << " " << smax << " " << tmax;
    }
}


int main()
{
    vector<int>v;
    int n;
    cout<<"Enter size of array :->";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int d;
        cin>>d;
        v.push_back(d);
    }
    display(v);
    ThreeGreatest(v);

}