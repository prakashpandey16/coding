#include<iostream>
using namespace std;
class book{
    public:
    string name;
    int price;
    int countpages;
    // member 
    int countBook(int p)
    {
        if(price==p) return 1;
        else return 0;
    }
    bool IsBook_present(string s)
    {
        if(name==s) return true;
        else return false;
    }
};
int main()
{
    book harrypotter;
    harrypotter.price = 1000;
    harrypotter.name = "h";
    cout<<harrypotter.countBook(1000)<<endl;
    cout<<harrypotter.IsBook_present("h");


}