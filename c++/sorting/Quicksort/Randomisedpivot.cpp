// time complexity of this quick sort  is 
// avg case = O(n.logn)
// worst case = O(n^2)
// if we want to improve time complexity then we use randomsied pivot element
// just change then code this pivotelement = arr[(si+ei)/2];
#include<iostream>
using namespace std;
int partition(int arr[],int si,int ei)
{
     int pivot_element = arr[(si+ei)/2];
     swap(arr[si],arr[(si+ei)/2]);
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