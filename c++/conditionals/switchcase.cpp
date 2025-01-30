#include<iostream>
using namespace std;
int main()
{
    int n1,n2;
    cout<< "Enter 1st number :";
    cin>>n1;
    char op;
    cout <<"Enter Operator :";
    cin>>op;
    cout << "Enter 2nd number :";
    cin>> n2;

    switch(op)
    {
        case '+' :
        cout<< n1+n2<< endl;

        break;
        case '-':
        cout<< n1-n2<< endl;
        break;
        case '*':
        cout<< n1*n2<< endl;
        break;
        case '/':
        cout << n1 / n2<< endl;
        break;
        default :
        cout << "Invalid operator";


    }
}
        
