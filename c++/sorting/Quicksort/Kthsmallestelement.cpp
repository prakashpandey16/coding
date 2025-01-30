#include<iostream>
using namespace std;
int partition(int arr[],int si,int ei)
{
      int pivotelement = arr[(si+ei)/2];
      swap(arr[si],arr[(si+ei)/2]);
      int count = 0;
      for(int i=si+1;i<=ei;i++)
      {
        if(arr[i]<=pivotelement) count++;
      }
      int pivotidx = count+si;
      swap(arr[si],arr[pivotidx]);
      int i = si;
      int j = ei;
      while(i<pivotidx && j>pivotidx)
      {
        if(arr[i]<=pivotelement) i++;
        else if(arr[j]>pivotelement) j--;
        else {
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
      }
      return pivotidx;
}
int Kthsmallestelement(int arr[],int si,int ei,int k)
{   if(si<=ei){
   int pi = partition(arr,si,ei);
   if(pi+1==k) return arr[pi];
   else if(pi+1<k) return Kthsmallestelement(arr,pi+1,ei,k);
   else return Kthsmallestelement(arr,si,pi-1,k);
      }
   return -1;
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
   int k;
   cin>>k;
   cout<<Kthsmallestelement(arr,0,n-1,k);
}