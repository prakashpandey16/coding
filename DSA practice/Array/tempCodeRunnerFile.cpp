// Q3. Write a program to print the matrix in wave form.
// 1 2 3
// 4 5 6
// 7 8 9
// Output : 7 4 1 2 5 8 9 6 3

int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
for(int j=0;j<3;j++)
{
   if(j%2==0)
   {
    for(int i=2;i>=0;i--)
    {
        cout<<arr[i][j]<<" ";
    }
   }
   else{
    for(int i=0;i<3;i++)
    {
        cout<<arr[i][j]<<" ";
    }
   }
   cout<<endl;