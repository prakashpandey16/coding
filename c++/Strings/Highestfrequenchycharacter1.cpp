#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int max = 0;
    int n = s.length();
    for(int i=0; i<n; i++)
    {
        char ch = s[i];
        int count = 1;
        for(int j = i+1; j<n; j++)
        {
            if(s[j]==s[i]) count++;
        }
        if(max<count) max = count;
    } 
      for(int i=0; i<n; i++)
    {
        char ch = s[i];
        int count = 1;
        for(int j = i+1; j<n; j++)
        {
            if(s[j]==s[i]) count++;
        }
        if(max==count) 
        {
         cout<<ch<<" "<<max<<endl;
        }
    }
}
// second method which is more good
// #include<iostream>
// #include<string>
// #include<vector>
// using namespace std;
// int main()
// {
//     string s;
//     cin>>s;
//     vector<int>arr(26,0);
//     for(int i=0;i<s.length();i++)
//     {
//         char ch = s[i];
//         int ascii = (int)ch;
//         arr[ascii-97]++;
//     }
//     int max =0;
//     for(int i=0;i<26; i++)
//     {
//         if(arr[i]>max) max = arr[i];
//     }
//     for(int i=0;i<26;i++)
//     {
//         if(arr[i]==max)
//         {
//             int ascii = i+97;
//             char ch = (char)ascii;
//             cout<<ch<<" "<<max<<endl;
//         }
//     }
// }