#include<iostream>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
    ll x,n;
    cin >> x >> n;
    if(n%2==0)
    {
        cout << x%4 + n -1 << endl;
    }
    else
    {
        cout << n+x -2 << endl;
    }

    }
}