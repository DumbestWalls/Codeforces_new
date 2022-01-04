#include <iostream>
#include <algorithm>

#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        string a = "";
        a = a + s[0];

        for (ll i = 1; i < n; i++)
        {
            if (s[i] < s[i - 1])
                a = a + s[i];
            else if (s[i] == s[i - 1] && i != 1)
                a = a + s[i];
            else
                break;
        }
        cout << a;
        reverse(a.begin(), a.end());
        cout << a << "\n";
    }
}