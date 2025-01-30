#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main()
{
 // Q1. Write a program to store 10 at every index of a 2D matrix with 5 rows and 5 columns.
//  vector<vector<int>>arr(5,vector<int>(5,5));
//  for(int i=0;i<5;i++)
//  {
//     for(int j=0;j<5;j++)
//     {
//         cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
//  }

//  Write a program to add two matrices and save the result in one of the given matrices.
//   int arr[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
//   int brr[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
//   for(int i=0;i<3;i++)
//   {
//     for(int j=0;j<4;j++)
//     {
//         arr[i][j]+=brr[i][j];
//     }
//   }
//   cout<<"Matrices sum is : "<<endl;
//   for(int i=0;i<3;i++)
//   {
//     for(int j=0;j<4;j++)
//     {
//         cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
//   }

// Q3. Write a C++ program to find the largest element of a given 2D array of integers.
// int arr[2][3] = {{1,4,3},{4,10,6}};
// int max_ele = INT_MIN;
// for(int i=0;i<2;i++)
// {
//     for(int j=0;j<3;j++)
//     {
//         if(arr[i][j]>max_ele)
//         {
//             max_ele = arr[i][j];
//         }
//     }
// }
// cout<<"Max element in array is : "<<max_ele<<endl;
  


// Q4. Write a program to print the row number having the maximum sum in a given matrix.
// int n,m;
// cin>>n;
// cin>>m;
// int arr[n][m];
// for(int i=0;i<n;i++)
// {
//     for(int j=0;j<m;j++)
//     {
//         cin>>arr[i][j];
//     }
// }
// int row_sum = INT_MIN;
// int max_sum = INT_MIN;
// int row_index = -1;
// for(int i=0;i<n;i++)
// {
//     for(int j=0;j<m;j++)
//     {
//         row_sum+=arr[i][j];

//     }
//     if(row_sum>max_sum)
//     {
//         max_sum = row_sum;
//         row_index = i;
//     }
// }
// cout<<"maximum sum of rows index is : "<< row_index;

// Q5. Write a function which accepts a 2D array of integers and its size as arguments and displays the
// elements of middle row and the elements of middle column.
// [Assuming the 2D Array to be a square matrix with odd dimensions i.e. 3x3, 5x5, 7x7 etc...]

// int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
// int mid = 3/2;
// cout<<"Rows : "<<endl;
// for(int j=0;j<3;j++)
// {
//     cout<<arr[mid][j]<<" ";
// }
// cout<<endl<<"Columns : "<<endl;
// for(int i=0;i<3;i++)
// {
// //     cout<<arr[i][mid]<<" ";

// }
// Q1. Write a program to print the elements of both the diagonals in a square matrix.

// int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
// for(int i=0;i<3;i++)
// {  for(int j=0;j<3;j++)
//     {
//         if((i+j)%2==0)
//         {
//             cout<<arr[i][j]<<" ";
//         }
//     }
//     cout<<endl;
    
// }

// Q2. Write a program to rotate the matrix by 90 degrees anti-clockwise.
// 1 2 3       7 4 1       3 6 9
// 4 5 6  -->  8 5 2  -->  2 5 8
// 7 8 9       9 6 3       1 4 7

// int arr[3][3] =  {{1,2,3},{4,5,6},{7,8,9}};

// step 1 : Transpose first matrix
// for(int i=0;i<3;i++)
// {
//     for(int j=i+1;j<3;j++)
//     {
//         swap(arr[i][j],arr[j][i]);
//     }
// }
// // swap rows of matrices
// for(int i=0;i<3/2;i++)
// {
//     for(int j=0;j<3;j++)
//     {
//         swap(arr[i][j],arr[2-i][j]);
//     }
    
// }

// for(int i=0;i<3;i++)
// {
//     for(int j=0;j<3;j++)
//     {
//         cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
// }

// int arr[3][3] =  {{1,2,3},{4,5,6},{7,8,9}};

// rows wise swaping 
// for(int i=0;i<3/2;i++)
// {
//     for(int j=0;j<3;j++)
//     {
//       swap(arr[i][j],arr[2-i][j]);
//     }
// }

// columns wise swapping
// for(int i=0;i<3;i++)
// {
//     for(int j=0;j<3/2;j++)
//     {
//       swap(arr[i][j],arr[i][2-j]);
//     }
// }

// transpose of matrix
// for(int i=0;i<3;i++)
// {
//   for(int j=i+1;j<3;j++)
//   {
//     swap(arr[i][j],arr[j][i]);
//   }
// }

// for(int i=0;i<3;i++)
// {
//     for(int j=0;j<3;j++)
//     {
//      cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
// }

// Q3. Write a program to print the matrix in wave form.
// 1 2 3
// 4 5 6
// 7 8 9
// Output : 7 4 1 2 5 8 9 6 3

// int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
// for(int j=0;j<3;j++)
// {
//    if(j%2==0)
//    {
//     for(int i=2;i>=0;i--)
//     {
//         cout<<arr[i][j]<<" ";
//     }
//    }
//    else{
//     for(int i=0;i<3;i++)
//     {
//         cout<<arr[i][j]<<" ";
//     }
//    }
//    cout<<endl;

// }

// generating a matix with size 10
// int n = 10;
// int value = 1;
// vector<vector<int>>arr(n,vector<int>(n,0));
// for(int i=0;i<n;i++)
// {
//     for(int j=0;j<n;j++)
//     {
//         arr[i][j] = value++;
//     }
    
// }
// for(int i=0;i<n;i++)
// {
//     for(int j=0;j<n;j++)
//     {
//         cout<<arr[i][j] <<" ";
//     }
//     cout<<endl;
    
// }

// spiral matrix 2
// class Solution {
// public:
//     vector<vector<int>> generateMatrix(int n) {
//         int minr = 0, minc = 0;
//         int maxr = n - 1, maxc = n - 1;
//         int value = 1;
//         vector<vector<int>> ans(n, vector<int>(n, 0));
//         while (minr <= maxr && minc <= maxc) {
//             // right
//             for (int j = minc; j <= maxc; j++) {
//                 ans[minr][j] = value++;
//             }
//             minr++;
//             // down
//             for (int i = minr; i <= maxr; i++) {
//                 ans[i][maxc] = value++;
//             }
//             maxc--;
//             // left
//             for (int j = maxc; j >= minc; j--) {
//                 ans[maxr][j] = value++;
//             }
//             maxr--;
//             // up
//             for (int i = maxr; i >= minr; i--) {
//                 ans[i][minc] = value++;
//             }
//             minc++;
//         }
//         return ans;
//     }
// };

 

}