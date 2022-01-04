#include<iostream>
#include<math.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll x;
        for(ll k=2;k<40;k++)
        {
            ll denom = pow(2,k) -1;
            if(n%denom!=0) continue;
            x = n/denom;
            break;
        }
        cout << x << endl;
    }
}
