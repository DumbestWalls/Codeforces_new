#include<iostream>
#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            ll input;
            cin >> input;
            v.push_back(input);
        }

        sort(v.begin(),v.end());
        ll count =0;
        ll i=0;
        while(v[i]==v[i+1])
        {
            count++;
            i++;
        }

        cout << v.size()-count-1 << endl;

    }
}