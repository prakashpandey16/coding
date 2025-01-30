#include<iostream>
using namespace std;
int main()
{
    string vowel;
    getline(cin,vowel);
    int count = 0;
    for(int i=0; i<vowel.length(); i++)
    {
        if(vowel[i]== 'a'|| vowel[i]=='e'|| vowel[i]=='i'||vowel[i]=='o'||vowel[i]=='u')
        count++;
    }
    cout<<count;

}