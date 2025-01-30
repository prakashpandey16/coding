#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout << "Enter 1st point :";
    cin>> x;
    cout << "Enter 2nd point :";
    cin>>y;
    if(x>0 && y>0)
    {
        cout << "Given point lies on 1st quardant " << endl;
        cout<< "Given point lies on x-axis";//x-axis means --(x,0)axis
    }
    else if(x<0 && y>0)
    {
       cout << "Given point lies on 2nd quardant " << endl;
        cout<< "Given point lies on y-axis"; //y-axis means --(0,y)axis
    }
    else if(x<0 && y<0)
    {
        
cout << "Given point lies on 3rd quardant " << endl;
        cout<< "Given point lies on (-y)-axis"; // (-y)-axis means --(0,-y)axis
    }
    else if (x>0 && y<0)
    {
        cout << "Given point lies on 4th quardant " << endl;
        cout<< "Given point lies on (-x)-axis"; // (-x)-axis means --(-x,0)axis
    }
    else {
         cout << "Given point lies on origin  " << endl;
        cout<< "Given point lies on (0,0)-axis";

    }
}
