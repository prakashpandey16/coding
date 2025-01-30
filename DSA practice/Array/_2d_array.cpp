#include<iostream>
using namespace std;
void pass_by_check(int arr[2][3])
{
    arr[0][1] = 100;
}
int main()
{
    // int arr[2][3] = {{1,2,3},{4,5,6}};
    // cout<<arr[0][1]<<endl;
    // cout<<arr[1][2]<<endl;
    // // printing all elements of array
    // for(int i=0;i<2;i++)
    // {
    //     for(int j=0;j<3;j++)
    //     {
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // Building an array from user input
    // int n,m;
    // cout<<"Enter Number of rows : ";
    // cin>>n;
    // cout<<"Enter Number of columns : ";
    // cin>>m;
    // int arr[n][m];
    // cout<<"Enter element of array : "<<endl;
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<m;j++)
    //     {
    //         cin>>arr[i][j];
    //     }
    // }
    // cout<<"Element of array : "<<endl;
    //  for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<m;j++)
    //     {
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }


    // addition of 2 matrices 
    // int n = 2,m = 3,a = 2,b = 3;
    // int matrix_1[n][m] = {{1,2,3},{4,5,6}};
    // int matrix_2[a][b] = {{1,2,3},{4,5,6}};
    
    // additions
    // int matrix_add[2][3];
    // if(n==a && m==b)
    // {
    //     for(int i=0;i<n;i++)
    //     {
    //         for(int j=0;j<m;j++)
    //         {
    //             matrix_add[i][j] = matrix_1[i][j] + matrix_2[i][j];
    //         }
    //     }
    // }
    // else{
    //     cout<<"Matrix Addition is not possible"<<endl;
    // }
    // // printing matrix adding
    // cout<<"Matrix additions are : "<<endl;
    // for(int i=0;i<2;i++)
    //     {
    //         for(int j=0;j<3;j++)
    //         {
    //             cout<<matrix_add[i][j]<<" ";
    //         }
    //         cout<<endl;
    //     }


    // Transpose of matrix
    // int n = 3,m = 3;
    // int arr[n][m] = {{1,2,3},{4,5,6},{7,8,9}};
    // cout<<"Matrix element in his original order : "<<endl;
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<m;j++)
    //     {
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // // transpose of a matrix printing 
    // cout<<"Matrix element in his Transpose order : "<<endl;
    // for(int j=0;j<m;j++)
    // {
    //     for(int i=0;i<n;i++)
    //     {
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
//   inplace transpose of matrix
//   for(int i=0;i<n;i++)
//   {
//     for(int j=0;j<m;j++)
//     {
//         swap(arr[i][j],arr[j][i]);
//     }
//   }
//   cout<<"Matrix element in his Transpose order : "<<endl;
//     for(int j=0;j<n;j++)
//     {
//         for(int i=0;i<m;i++)
//         {
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
    //  
    //  int n = 2, m = 3;
    // int arr[n][m] = {{1, 2, 3}, {4, 5, 6}};
    // int transposed[m][n];

    // // Transpose the matrix
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < m; j++) {
    //         transposed[j][i] = arr[i][j];
    //     }
    // }

    // // Print the original matrix
    // cout << "Matrix elements in their original order:" << endl;
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < m; j++) {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // // Print the transposed matrix
    // cout << "Matrix elements in their transposed order:" << endl;
    // for (int i = 0; i < m; i++) {
    //     for (int j = 0; j < n; j++) {
    //         cout << transposed[i][j] << " ";
    //     }
    //     cout << endl;
    // }


    // Rotate Matrix by 90 degree
    // int n = 3,m = 3;
    // int arr[n][m] = {{1,2,3},{4,5,6},{7,8,9}};
    // cout<<"Matrix in his Original order : "<<endl;
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<m;j++)
    //     {
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    
    // //  step 1 : firstly transpose matrix
    //  for(int i=0;i<n;i++)
    // {
    //     for(int j=i+1;j<m;j++)
    //     {
    //       swap(arr[i][j],arr[j][i]);
    //     }
    // }

    // // step 2 : reverse rows of matrix
    // for(int i=0;i<n;i++)
    // {
    //   for(int j=0;j<m/2;j++)
    //   {
    //     swap(arr[i][j],arr[i][m-j-1]);
    //   }
       
    // }
    // cout<<"Matric after Rotating 90 Degree : "<<endl;
    //  for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<m;j++)
    //     {
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // multiplications of 2 matrices
    // we can multiply 2 matrices when number of columns in matric 1 == number of rows in matric 2 
    // int n=2,m = 3,a=3,b = 2;
    // int matrix_1[n][m] = {{1,2,3},{4,5,6}};
    // int matrix_2[a][b] = {{1,2},{3,4},{5,6}};
    // // resultant matrix size is n = number of rows in matrix 1 and number of columns in matrix 2
    // int resultant_mat[n][b]; 
    // if(m!=a)
    // {
    //     cout<<"Matrix Multiplications is not possible"<<endl;
    //     return 0;
    // }
    // else{
    //     for(int i=0;i<n;i++)
    //     {
    //         for(int j=0;j<b;j++)
    //         {
    //             resultant_mat[i][j] = 0;
    //             for(int k = 0;k<m;k++)
    //             {
    //                 resultant_mat[i][j] += matrix_1[i][k] * matrix_2[k][j];
    //             }
    //         }
    //     }
        
    // }
    // // printing multiplications of matrix
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<b;j++)
    //     {
    //         cout<<resultant_mat[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // rotate matrix by 180 degree  Questions
    // int n = 3,m = 3;
    // int arr[n][m] = {{1,2,3},{4,5,6},{7,8,9}};
    // cout<<"Original matrix : "<<endl;
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<m;j++)
    //     {
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    
    // // rotateting matrix by 180 degree
    // for(int i=0;i<n/2;i++)
    // {
    //     for(int j=0;j<m;j++)
    //     {
    //         swap(arr[i][j],arr[n-i-1][j]);
    //     }
    // }
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<m/2;j++)
    //     {
    //         swap(arr[i][j],arr[i][m-j-1]);
    //     }
    // }

    // // printing rotated  matrix
    // cout<<"Matrix After rotateting 180 Degree : "<<endl;
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<m;j++)
    //     {
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }


    // printing matrix in Wave form (sidha zigzag)
    // Initialize a 3x3 matrix
    // int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    
    // // // Iterate through each row
    // // for (int i = 0; i < 3; i++) {
        
    // //     // For even rows, print left to right
    // //     if (i % 2 == 0) {  
    // //         for (int j = 0; j < 3; j++) {
    // //             cout << arr[i][j] << " ";
    // //         }
    // //     } else {  // For odd rows, print right to left
    // //         for (int j = 3 - 1; j >= 0; j--) {
    // //             cout << arr[i][j] << " ";
    // //         }
    // //     }
    // //     cout << endl;  // Move to the next line after each row
    // // }

    // // printing matrix in wave form (ulta zigzag)
    // for(int i=2;i>=0;i--)
    // {
    //     if(i%2!=0)
    //     {
    //         for(int j=0;j<3;j++)
    //         {
    //             cout<<arr[i][j]<<" ";
    //         }
    //     }
    //     else{
    //          for(int j=2;j>=0;j--)
    //         {
    //             cout<<arr[i][j]<<" ";
    //         }
            
    //     }
    //     cout<<endl;
    // }

    // Passing a 2d array to a functions
    // if we pass an 2d array to a  function it is always passed as pass by reference 
//     int brr[2][3] = {{1,2,3},{4,5,6}};
//     cout<<"Original array : "<<endl;
//     for(int i=0;i<2;i++)
//    {
//     for(int j=0;j<3;j++)
//     {
//         cout<<brr[i][j]<<" ";
//     }
//     cout<<endl;
//    }
//     pass_by_check(brr);
//    cout<<"array after changing elements : "<<endl;
//    for(int i=0;i<2;i++)
//    {
//     for(int j=0;j<3;j++)
//     {
//         cout<<brr[i][j]<<" ";
//     }
//     cout<<endl;
//    }

}