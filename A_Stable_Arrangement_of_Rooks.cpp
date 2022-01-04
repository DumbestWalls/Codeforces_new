#include <iostream>
#include <math.h>

#define ll long long

using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        if (ceil((double)n / 2) < k)
        {
            cout << "-1" << endl;
        }
        else
        {
            for (ll i = 0; i < n; i++)
            {
                for (ll j = 0; j < n; j++)
                    if (i == j && i % 2 == 0 && k > 0)
                    {
                        cout << "R";
                        k--;
                    }
                    else
                        cout << ".";
                cout << endl;
            }
        }
    }
}