#include<iostream>
#define ll long long

using namespace std;

int main()
{
    string s;
    cin >> s;
    string a="";
    int flag=0;
    if(s[0]=='-')
    {
        for(int i=0;i<s.size()-2;i++)
            {
                a = a + s[i];
            }
        (int(s[s.size()-2]>int(s[s.size()-1])))?a=a+ s[s.size()-1] : a= a + s[s.size()-2];
        if(a[0]=='-' && a[1]=='0') cout << 0;
        else {
            cout << a;
        }
    }
    else cout << s;
}