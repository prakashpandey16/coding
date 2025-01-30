#include<iostream>
using namespace std;
int main()
{
    int arr[] = {5,54,98,24,32};
    int* ptr = arr;
    for(int i=0; i<5; i++)
    {
        cout<<*ptr<<" ";// ptr pointing address of 1st element array 
        ptr++;
         //  in the last iteration of loop ptr pointing address of x60
    }
       cout<<endl;
       ptr = arr;//now pointer pointing address of 1st element of array

      *ptr = 9;//now pointer pointing address of 1st element of array
       ptr++;//now pointer address is increasing 
      *ptr = 10;// now pointer pointing 2nd element of array;
        ptr--;//now pointer pointing address of 1st element of array
     for(int i=0; i<5; i++)
    {
       cout<<ptr[i]<<" ";
    }
} 