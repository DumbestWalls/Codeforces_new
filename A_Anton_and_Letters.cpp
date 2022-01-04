#include<iostream>
#include<vector>
#include<array>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    array<int,27> arr;
    arr.fill(0);

    for(int i=1;i<s.size()-1;i=i+3)
    {
        int a = int(s[i])-97;
        arr.at(a)=1;

    }

    int count=0;
    for(int i=0;i<27;i++)
    {
        if(arr.at(i)==1) count++;
    }

    cout << count;
}