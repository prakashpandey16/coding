#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    // 2D vector is a vector of vector
    // vector<vector<int>>v;
    // vector<int>v1;
    // v1.push_back(10);
    // v1.push_back(20);
    // v1.push_back(30);
    // vector<int>v2;
    // v2.push_back(40);
    // v2.push_back(50);
    // vector<int>v3;
    // v3.push_back(60);
    // v3.push_back(70);
    // v3.push_back(80);
    // v3.push_back(90);
    // v.push_back(v1);
    // v.push_back(v2);
    // v.push_back(v3);
    // cout<<v[0][2]<<endl;
    // cout<<v[1][1]<<endl;
    // cout<<v[2][3]<<endl;
    // This is how we can print element of 2d vector
    // for(int i=0;i<v.size();i++)
    // {
    //     for(int j=0;j<v[i].size();j++)
    //     {
    //         cout<<v[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // vector with initial size 3 it means it can store 3 vector 
    // vector<vector<int>>v(3);

    //  here 2D vector can store 3 vector with initial size 4 and all elements are 2
    // vector<vector<int>>v(3,vector<int>(4,2));

    // Basic stl functions -> push_back , pop_back(),sort(),reverse();

    // vector<int>v = {1,2,3,4};
    // sort(v.rbegin(),v.rend());
    // for(int i=0;i<v.size();i++)
    // { 
    //     cout<<v[i]<<" ";
    // }

    // pascal triangle 
    // int n = 5;
    // for(int i=0;i<=n;i++)
    // {
    //     int curr = 1;
    //     for(int j=0;j<=i;j++)
    //     {
    //         cout<<curr<<" ";
    //         curr = curr * (i-j)/(j+1);
    //     }
    //     cout<<endl;
    // }

    // 
 
//   leetocode 118. Pascal's Triangle
//   int n;
//   cin>>n;
//   vector<vector<int>>v;
//   for(int i=0;i<n;i++)
//   {
//     vector<int>rows(i+1,1);
//     for(int j=1;j<i;j++)
//     {
//         rows[j] = v[i-1][j-1] + v[i-1][j];
//     }
//     v.push_back(rows);
//   }
//   for(int i=0;i<n;i++)
//   {
//     for(int j=0;j<v[i].size();j++)
//     {
//         cout<<v[i][j]<<" ";
//     }
//     cout<<endl;
//   }


// binary to decimal code

//  

// leetcode 861. Score After Flipping Matrix
// vector<vector<int>>grid;
// vector<int>arr;
// arr.push_back(0);
// arr.push_back(0);
// arr.push_back(1);
// arr.push_back(1);

// vector<int>brr;
// brr.push_back(1);
// brr.push_back(0);
// brr.push_back(1);
// brr.push_back(0);
// vector<int>crr;
// crr.push_back(1);
// crr.push_back(1);
// crr.push_back(0);
// crr.push_back(0);

// grid.push_back(arr);
// grid.push_back(brr);
// grid.push_back(crr);

// // code logic start from here 
// int rows = grid.size();
// int cols = grid[0].size();
// // step 1 : flip rows which start from 0
// for(int i=0;i<rows;i++)
// {
//     if(grid[i][0]==0)
//     {
//         for(int j=0;j<cols;j++)
//         {
//             if(grid[i][j] == 0) grid[i][j] = 1;
//             else grid[i][j] = 0;
//         }
//     }
// }

// // flip columns whrere noz > noo
// for(int j=0;j<cols;j++)
// {
//     int noz = 0;
//     int noo = 0;
//     for(int i=0;i<rows;i++)
//     {
//         if(grid[i][j]==0) noz++;
//         else noo++;
//     }
//     if(noz>noo)
//     {
//         for(int i=0;i<rows;i++)
//         {
//             if(grid[i][j]==0) grid[i][j] = 1;
//             else grid[i][j] = 0;
//         }
//     }
    
// }
// // step 3 : calculating decimal value of frid
// int sum = 0;
// for(int i=0;i<rows;i++)
// {
//     int x = 1;
//     for(int j=cols-1;j>=0;j--)
//     {
//         sum+=grid[i][j]*x;
//         x*=2;
//     }
// }
// cout<<sum<<endl;


//  leetcode 240. Search a 2D Matrix II
//  Write an efficient algorithm that searches for a value target in an m x n integer matrix matrix.
//   This matrix has the following properties:

// Integers in each row are sorted in ascending from left to right.
// Integers in each column are sorted in ascending from top to bottom.

//   function which do this
// bool searchMatrix(vector<vector<int>>& matrix, int target)
//  {
//     int rows = matrix.size();
//     int cols = matrix[0].size();

//     // using 2 pointer approach
//     int i = 0;
//     int j = cols-1;
//     while(i<=rows && j>=0)
//     {
//         if(matrix[i][j]==target) return true;
//         else if(matrix[i][j]>target) j--;
//         else i++;
//     }
//     return false;
// }

// int n,m;
// cout<<"Enter number of rows : ";
// cin>>n;
// cout<<"Enter number of columns :";
// cin>>m;
// int arr[n][m];
// cout<<"Enter element of matrix : "<<endl;
// for(int i=0;i<n;i++)
// {
//     for(int j=0;j<m;j++)
//     {
//         cin>>arr[i][j];
//     }
// }

// // step 1:
// int minr = 0,minc = 0;
// int maxr = n-1,maxc = m-1;

// // step 2 : condition
// int max_count = n*m;
// int curr_count = 0;
// while(minr<=maxr && minc<=maxc)
// {
//     // step 3 :

//     // right
//     for(int j=minc;j<=maxc && curr_count<max_count;j++)
//     {
//         cout<<arr[minr][j]<<" ";
//         curr_count++;
//     } 
//     minr++;

//     // down
//     for(int i=minr;i<=maxr && curr_count<max_count;i++)
//     {
//       cout<<arr[i][maxc]<<" ";
//       curr_count++;
//     }
//     maxc--;
//     // left
//     for(int j=maxc;j>=minc && curr_count<max_count;j--)
//     {
//      cout<<arr[maxr][j]<<" ";
//      curr_count++;
//     }
//     maxr--;

//     // up
//     for(int i=maxr;i>=minr && curr_count<max_count;i--)
//     {
//         cout<<arr[i][minc]<<" ";
//         curr_count++;
//     }
//     minc++;


// }

  // leetcode questions : 3 sum
//  vector<vector<int>> threeSum(vector<int>& arr)
// {
//     int n = arr.size();
//     sort(arr.begin(), arr.end());
//     vector<vector<int>> ans;
    
//     for (int i = 0; i < n; i++)
//     { 
//         // Skip duplicate elements for 'i'
//         if (i > 0 && arr[i] == arr[i - 1]) continue;
        
//         int j = i + 1;
//         int k = n - 1;
        
//         while (j < k)
//         {
//             int sum = arr[i] + arr[j] + arr[k];
//             if (sum == 0)
//             {
//                 vector<int> temp = {arr[i], arr[j], arr[k]};
//                 ans.push_back(temp);
//                 j++;
//                 k--;
                
//                 // Removing duplicates for 'j' and 'k'
//                 while (j < k && arr[j] == arr[j - 1]) j++;
//                 while (j < k && arr[k] == arr[k + 1]) k--;
//             }
//             else if (sum > 0) 
//                 k--;
//             else 
//                 j++;
//         }
//     }
//     return ans;
// }







}