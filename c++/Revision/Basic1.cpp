#include<iostream>
using namespace std;
void Print_Name()
 {
    cout<<"Hey my Name is Prakash pandey"<<endl;
 }
 int swap(int* a,int* b)
 {
    int temp = *a;
    *a = *b;
    *b = temp;
 }
// inline functions
inline int cube(int s) { return s*s*s;}  


int main()
{
    // int a = 10;
    // cout<<a<<endl;
    // cout<<"A value :"<<a<<endl;
    // double c = 11.34;
    // double &b = c;
    // cout<<c<<endl;
    // b = 20;
    // cout<<c<<endl;
    // int ram,shyam,ajay;
    // cout<<"Enter age of Ram : ";
    // cin>>ram;
    // cout<<"Enter age of shyam : ";
    // cin>>shyam;
    // cout<<"Enter age of ajay : ";
    // cin>>ajay;
    // if(ram<shyam && ram<ajay)
    // {
    //     cout<<"Ram is yougest among them";
    // }
    // else if(shyam<ram && shyam<ajay)
    // {
    //     cout<<"Shyam is youngest between them";
    // }
    // else{
    //     cout<<"Ajay is youngest them";
    // }
    // print ap like 1 3 5 7.....n
    // int n;
    // cin>>n;
    // int i = 1;
    // do
    // {
    //     cout<<i<<" ";
    //     i+=3;
    // } while(i<=3*n-2);
    // cout<<endl;

    // create a functions which prints a name
 
   
//  Print_Name();
//  int a,b;
//  cin>>a>>b;
//  cout<<"a value is : "<<a<<endl<<"b value is : "<<b<<endl;
//  swap(&a,&b);
//   cout<<"a value is : "<<a<<endl<<"b value is : "<<b<<endl;
  int s;
  cin>>s;
  cout<<"The cube of 3 is : ";
  cout<<cube(s)<<endl;



}