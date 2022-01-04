#include<iostream>
#include<string>
#define ll long long

using namespace std;

int main()
{
    string a,b;
   cin >> a >> b;
    for(int i=0;a[i]!='\0';i++)
    cout << (a[i]!=b[i]);
}