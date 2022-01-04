#include<iostream>
#include<vector>
#include<array>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
    string s;
    cin >> s;
    bool flag=true;
    if(s.size()%2!=0)
    {
        cout << "NO" << endl;
        goto here;
    }
    else
    {
        for(int i=0;i<s.size()/2;i++)
        {
            if(s[i]!=s[i+(s.size()/2)])
            {
                cout << "NO" << endl;
                goto here;
            }
        }

    }
    cout << "YES" << endl;
    here:;
    }
}