#include<iostream>
using namespace std;
int partition(int arr[],int si,int ei)
{
     int pivot_element = arr[si];
    int count = 0;
    for(int i=si+1;i<=ei;i++)
    {
        if(arr[i]<=pivot_element) count++;
    }
    int pivotidx = count+si;
    swap(arr[si],arr[pivotidx]);
    int i=si;
    int j = ei;
    while(i<pivotidx && j>pivotidx)
    {
        if(arr[i]<=pivot_element) i++;
        if(arr[j]>pivot_element) j--;
        else if(arr[i]>pivot_element && arr[j]<=pivot_element)
        {
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pivotidx;
}
void quicksort(int arr[],int si,int ei)
{
    if(si>=ei) return ;
    int pi = partition(arr,si,ei);
    quicksort(arr,si,pi-1);
    quicksort(arr,pi+1,ei);

}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
