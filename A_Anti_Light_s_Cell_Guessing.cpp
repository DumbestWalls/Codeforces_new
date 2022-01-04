#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;

        if (n == 1 && m == 1)
            cout << 0 << endl;
        else if (n == 1 ||
        
         m == 1)
            cout << 1 << endl;
        else cout << 2 << endl;
    }
}