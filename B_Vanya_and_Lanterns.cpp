#include<iostream>
#include<vector>
#include<algorithm>
#include<limits>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,l;
    cin >> n >> l;
    vector<double> v;
    for(int i=0;i<n;i++)
    {
        ll input;
        cin >> input;
        v.push_back(input);
    } 
    sort(v.begin(),v.end());
    double minD=0.0;
    int i=0;
    if(v.at(0)!=0)
    {
        minD=v.at(0);
        for(i=1;i<n;i++)
        {
            if((v[i]-v[i-1])/2>minD)
            {
                minD=(v[i]-v[i-1])/2;
            }
        }
        
    }
    else
    {
        for(i=1;i<n;i++)
        {
            if((v[i]-v[i-1])/2>minD)
            {
                minD=(v[i]-v[i-1])/2;
            }
        }
    }

    if((l-v[n-1])>minD) 
    minD = l-v[n-1];

    cout << fixed << setprecision(10) << minD << endl;
}