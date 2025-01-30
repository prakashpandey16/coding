#include<iostream>
using namespace std;
int maze1(int sr,int sc,int er,int ec)
{
    if(sr>er || sc>ec) return 0;
    if(sr==er && sc==ec) return 1;
    int rightways = maze1(sr,sc+1,er,ec);
    int downways = maze1(sr+1,sc,er,ec);
    int totalways = rightways + downways;
    return totalways;

}

int maze2(int row,int col)
{
    if(row < 1 || col < 1) return 0;
    if(row==1 && col==1) return 1;
    int rightways = maze2(row,col-1);
    int downways = maze2(row-1,col);
    int totalways = rightways + downways;
    return totalways;
}
void path(int sr,int sc,int er,int ec,string s)
{
    if(sr>er || sc>ec) return;
    if(sr==er && sc==ec)
    {
        cout<<s<<endl;
        return ;
    }
    path(sr,sc+1,er,ec,s+'R');
    path(sr+1,sc,er,ec,s+'D');
}
int main()
{
   cout<<maze1(1,1,3,3);
   cout<<endl;
  cout<<maze2(3,3);
  cout<<endl;
  path(1,1,3,3," ");
}