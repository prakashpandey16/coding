#include<iostream>
using namespace std;
int sqrt(int x)
{
    int lo = 0;
    int hi = x;
    while(lo<=hi)
    {
        int mid = (lo + hi)/2;
        if(mid*mid==x) return mid;
        else if(mid*mid>x) hi = mid-1;
        else lo = mid+1;
    }
    return hi;
}
int main()
{
    int n;
    cin>>n;
    cout<<sqrt(n);

}