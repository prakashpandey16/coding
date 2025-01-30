#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n & (n-1)==0) 
    {  cout<<0;
       return 0;
    }
    else {
        int p = 0,temp = n;
        while(temp>0)   
        {
            temp/=2;
            p++;
        } 
        int nearest = 1<<p;
        cout<<nearest-n<<endl;
        return 0;
    }
}
