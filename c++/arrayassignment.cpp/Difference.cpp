#include<iostream>
using namespace std;
void display(int a[],int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void difference(int b[],int n)
{
    int sumofeven=0;
    int sumofodd=0;
    for(int i=1; i<n; i++)
    {
        if(i%2==0)
            sumofeven+=b[i];
        
       else 
            sumofodd+=b[i];

    }
    cout<<(sumofeven - sumofodd)<<endl;
}
int main()
{
    int n;
    cout<<"Enter size of array :->";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    { 
         cout<<"Enter element of  "<<i<<" of array :->";
        cin>>arr[i];
    }
    display(arr,n);
    difference(arr,n);

    
    
}