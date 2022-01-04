#include<iostream>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll a,b;
        cin >> a >> b;
        int count=0;
        if(a%b!=0){
        if(a>b)
        {
            ll n=a%b;
            count = b-n;
        }
        else if(a<b)
        {
            count = b-a;
        }}
        
        cout << count << endl;
    }
}