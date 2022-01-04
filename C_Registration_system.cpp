#include<iostream>
#include<utility>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    vector<pair<string,ll> > v;
    ll n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        int flag=0;
        string s;
        cin >> s;
        for(int j=0;j<v.size();j++)
        {
            if(s==v[j].first)
            {
                cout << s << v[j].second <<endl;
                v[j].second++;
                flag=1;
            }
        }    
        if(flag==0)
        {cout << "OK" <<endl;
        v.push_back(make_pair(s,1));}
    }
}