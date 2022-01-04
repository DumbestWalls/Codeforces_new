#include <iostream>
#define ll long long
using namespace std;

// first count no of 01 and 10 combination.
// if no. of 01 and 10 is equal then multiply the value of count01 * 2
// if 11 is present, hold that 1 and change other to check if 01 and 10 combination can reduce
// or not.

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string a, b;
        cin >> a >> b;
        ll count01 = 0;
        ll count10 = 0;
        bool flag = false;
        bool flag2 = false;
        ll store;
        for (ll i = 0; i < n; i++)
        {
            if (a[i] == '0' && b[i] == '1')
                count01++;
            else if (a[i] == '1' && b[i] == '0')
                count10++;
            else if (a[i] == '1' && b[i] == '1')
            {
                flag = true;
                store = i;
            }
        }
        ll count01B = 0;
        ll count10B = 0;
        if (flag)
        {
            for (ll i = 0; i < n; i++)
            {
                if (a[i] == '0' && i != store)
                {
                    a[i] = '1';
                }
                else if (a[i] == '1' && i != store)
                {
                    a[i] = '0';
                }

                if (a[i] == '0' && b[i] == '1')
                    count01B++;
                else if (a[i] == '1' && b[i] == '0')
                    count10B++;
            }

            if (count01B == count10B)
            {
                flag2 = true;
            }
        }
        if(count01!=count10)
        {
            if(flag==true && flag2==true)
            {
                cout << count01B*2 + 1 <<  endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
        else
        {
            if(flag==true)
            {
                if(flag2==true)
                cout << min((count01*2),(count01B*2+1)) << endl;
                else
                cout << count01*2 << endl;
            }
            else
            {
                cout << count01*2 << endl;

            }
        }
    }
}