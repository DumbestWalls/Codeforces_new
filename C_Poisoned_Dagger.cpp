#include <iostream>
#define ll long long
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, h;
        cin >> n >> h;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
            cin >> v[i];
        vector<ll> maxmmd(n);
        ll maxD = 0, total = 0;
        for (ll i = 0; i < n - 1; i++)
        {
            maxmmd[i] = v[i + 1] - v[i];
            maxD = max(maxmmd[i], maxD);
            total += maxmmd[i];
        }
        maxmmd[n - 1] = INT64_MAX;
        if ((h - total) >= maxD)
        {
            cout << h - total << endl;
            return 0;
        }
        ll strength = 1;
        ll output = maxD;
        while (strength <= maxD)
        {
            ll mid = (strength + maxD) / 2;
            total = 0;
            for (ll i = 0; i < n; i++)
            {
                total += min(mid, maxmmd[i]);
            }
            if (total >= h)
            {
                output = min(mid, output);
                maxD = mid - 1;
            }
            else
            {
                strength = mid + 1;
            }
        }
        cout << output << endl;
    }
}
