#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#include <vector>
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll w, h;
        cin >> w >> h;
        ll k1;
        cin >> k1;
        vector<int> v1, v2, v3, v4;
        for (int i = 0; i < k1; i++)
        {
            ll input;
            cin >> input;
            v1.push_back(input);
        }
        ll k2;
        cin >> k2;
        for (int i = 0; i < k2; i++)
        {
            ll input;
            cin >> input;
            v2.push_back(input);
        }

        ll k3;
        cin >> k3;
        for (int i = 0; i < k3; i++)
        {
            ll input;
            cin >> input;
            v3.push_back(input);
        }

        ll k4;
        cin >> k4;
        for (int i = 0; i < k4; i++)
        {
            ll input;
            cin >> input;
            v4.push_back(input);
        }

        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());
        sort(v3.begin(), v3.end());
        sort(v4.begin(), v4.end());

        ll v1Max = h*(v1[v1.size() - 1] - v1[0]);
        ll v2Max = h*(v2[v2.size() - 1] - v2[0]);
        ll v3Max = w*(v3[v3.size() - 1] - v3[0]);
        ll v4Max = w*(v4[v4.size() - 1] - v4[0]);

        ll a1=max(v1Max,v2Max);
        ll a2=max(v3Max,v4Max);
        cout << max(a1,a2) <<endl;

        
    }
}