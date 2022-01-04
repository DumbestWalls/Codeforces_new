#include<iostream>
#define ll long long

using namespace std;

int main()
{
    ll k,l,m,n,d;
    cin >> k >> l>> m>>n>>d;
    ll count =0;
    for(ll i=1;i<=d;
    i++)
    {
        if(i%k==0 || i%l==0 || i%m==0 || i%n==0)
        count++;
    }

    cout << count;
    
}