#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int x=0;
    for(int i=0;i<n;i++)
    {
        string s;
        cin >> s;
        if(s[0]=='X')
        {
            if(s[1]=='+') x++;
            else x--;
        }
        else{
            if(s[0]=='-') x--;
            else x++;
        }
    }

    cout << x;
}