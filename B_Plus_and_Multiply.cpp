#include <iostream>
#define ll long long
#include <algorithm>
using namespace std;
#include <vector>
#include <math.h>

int main()
{
    vector<ll> v;
    ll t;
    cin >> t;
    while (t--)
    {   bool flag=false;
        ll n, a, b; 
        cin >> n >> a >> b;
        if(a==1)
        {
            if((n-1) %b==0) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
        else
        {
            ll x=1;
            while(x<=n)
            {
                if((n-x)%b == 0)
                {
                    flag=true;
                    break;
                }
                x = x*a;
            }

            flag==true?cout << "Yes" <<endl: cout <<"No" << endl;
        }

        
    }
}