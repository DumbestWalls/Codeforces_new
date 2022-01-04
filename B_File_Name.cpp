#include<iostream>

#define ll long long

using namespace std;

int main()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll count=0;
    for(int i=2;i<n;i++)
    {
        if(s[i]=='x' && s[i-1]=='x' && s[i-2]=='x')
        {
            count++;;
            while(s[i+1]=='x')
            {
                count++;
                i++;
            }
        }
    }

    cout << count << endl;
}