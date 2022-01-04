#include<iostream>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll a,b,c;
        cin >> a >> b >> c;
        if((a+c)==2*b)
        {
            cout << 0 << endl;
        }
        else
        {
                cout<< 1<<endl;
        }
    }
}