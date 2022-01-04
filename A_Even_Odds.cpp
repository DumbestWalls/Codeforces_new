#include<iostream>
#define ll long long

using namespace std;

int main()
{
    ll n,k;
    cin >> n >> k;

    if(n%2!=0)n=n+1;
    if(k<=n/2)
    {
        cout << k+k-1;
    }
    else{
        n = k-(n/2);
        cout << 2 + (n-1)*2;
    }

    
}