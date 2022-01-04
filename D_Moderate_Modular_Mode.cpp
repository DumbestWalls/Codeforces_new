#include<iostream>
#include<math.h>

using namespace std;

#define ll long long

int main(){
    ll t;
    cin >> t;
    while(t)
    {
        ll x,y;
        cin >> x >> y;
        // condition: n? if n%x = y %n
        ll n=0;
        while((n-(x*(n/x)))!=(y-(n*(y/n))))
        {
            n++;
        }
        cout << n;

        t--;
    }
}
