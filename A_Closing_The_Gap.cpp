#include<iostream>

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
        int sum=0;
        for(int i=0;i<n;i++)
        {
            ll input;
            cin >> input;
            sum=sum+input;
        }
        if(sum%n==0) cout <<"0" << endl;
        else cout << "1" << endl;
    }
}