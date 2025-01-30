#include<iostream>
using namespace std;
void display(int a[],int size)
{
    for(int i=0; i<=size-1; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void change(int b[],int size)
{
    b[3]= 45;
}

int main()
{
    int arr[] = {2,6,34,56, 5,45,3};
    int size = sizeof(arr) / sizeof(arr[0]);
    display(arr,size);
    change(arr,size);
    display(arr,size);

}