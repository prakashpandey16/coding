#include<iostream>
using namespace std;
int main()
{
    int cp,sp;
    cout << "Enter cost price :";
    cin>> cp;
    cout << "Enter selling price :";
    cin>>sp;
    if(sp>cp){
        cout << sp-cp<<"";
        cout << " rupees Make profit";
    } 
  else if  (sp<cp) {
     cout << sp-cp<< "";
        cout <<" rupees Make loss";
  } 
    else{
    
    cout << "No Profit No Loss";
    }

}