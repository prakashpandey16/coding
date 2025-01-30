#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<vector<int>> v;
    vector<int> v1 = {0, 0, 1, 1};
    vector<int> v2 = {1, 0, 1, 0};
    vector<int> v3 = {1, 1, 0, 0};

    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);

    int rows = v.size();
    int col = v[0].size();

    // Row flipping
    for(int i = 0; i < rows; i++) {
        if(v[i][0] == 0) {
            for(int j = 0; j < col; j++) {
                if(v[i][j] == 0) 
                    v[i][j] = 1;
                else 
                    v[i][j] = 0;
            }
        }
    }

    // Output the matrix after row flipping
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < col; j++) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    // Column flipping
    for(int j = 0; j < col; j++) {
        int noz = 0;
        int noo = 0;
        for(int i = 0; i < rows; i++) {
            if(v[i][j] == 0) 
                noz++;
            else 
                noo++;
        }
        if(noz > noo) {
            for(int i = 0; i < rows; i++) {
                if(v[i][j] == 0) 
                    v[i][j] = 1;
                else 
                    v[i][j] = 0;
            }
        }
    }

    // Output the matrix after column flipping
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < col; j++) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    int sum =0;
   for(int i=0; i<rows; i++)
   {  int x =1;
       for(int j=col-1; j>=0; j--)
       {
         sum +=v[i][j] * x;
         x *=2;
       }

   }
   cout<<sum;

}
