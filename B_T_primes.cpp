#include<iostream>
#define N 10000000
using namespace std;
#define ll long long
#include<array>
#include<bits/stdc++.h>

array<int,N+1> prime;

int main()
{
    for(int i=2;i<=N;i++)
    {
        prime[i]=1;
    }

    for(int i=2;i*i<N;i++)
    {
        if(prime[i]==1)
        {
            for(int j=i*i;j<=N;j=i+j)
            {
                prime[j]=0;
            }
        }
    }
    
    ll n;
    cin >> n;
    while(n--)
    {
        ll a;
        cin >> a;
        ll sqrt_a = int(sqrt(a));
        if(sqrt_a*sqrt_a==a)
        {
            if(prime[int(sqrt_a)]==0)
            {
                cout << "NO" << endl;
            }
            else
             cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
           
        }

    }
}