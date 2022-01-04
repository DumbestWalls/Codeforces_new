#include<iostream>
#include<algorithm>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll p,m;
        cin >> p >> m;
        ll teamPossible = (p+m)/4;
        cout << min(teamPossible,min(p,m)) << endl;
    }
}