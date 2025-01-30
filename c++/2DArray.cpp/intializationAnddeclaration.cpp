#include<iostream>
using namespace std;
int main()
{

    int a[4][5];
    a[3][4]=9;
    cout<<a[3][4];
    cout<<endl;
    // these are few steps for intialization and declaration of 2-D Array
     int arr[2][3] ={{3,4,5},{6,7,4}};
     int brr[3][2] = {3,4,5,6,7,8};
     int crr[][3] ={2,3,4,2,4,4}; 
     cout<<crr[1][2]<<endl;
     cout<<brr[0][2]<<endl;
     cout<<arr[1][2];

}