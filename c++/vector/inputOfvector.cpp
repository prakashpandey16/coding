#include<iostream>
#include<vector>
int main()
{
   std:: vector<float>b;
    int n;
    std:: cout<<"Enter a size of vector :->";
    std:: cin>>n;
    for(int i=0; i<n; i++)
    {
        int x;
       std :: cout<<"Enter element "<<i + 1<<"  of vector";
       std:: cin>>n;
        b.push_back(x);
    }
    int y;
   std::  cout<<"Enter a element you want to search :->";
   std :: cin>>y;
   int idx = -1;
    for(int i=0; i<b.size(); i++)
    {
        if(b.at(i)==y) idx = i;
    }
    std:: cout<<idx; 

}