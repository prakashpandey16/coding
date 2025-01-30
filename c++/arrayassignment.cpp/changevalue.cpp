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
void changevalue(int b[],int n)
{
    for(int i=1; i<n; i++)
    {
        if(i%2==0)
           b[i] +=10;

        else 
           b[i] *=2;
    }
    
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
    changevalue(arr,n);
     display(arr,n);
}