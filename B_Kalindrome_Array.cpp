#include<iostream>
#define ll long long
#include<algorithm>
using namespace std;
#include<vector>
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        vector<ll> v;
        for(int i=0;i<n;i++)
        {
            ll input;
            cin>> input;
            v.push_back(input);
        }

        sort(v.begin(),v.end());
        if(v.size()==1 || v.size()==2)
        {
            cout << "YES" << endl;
            goto here;
        }
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==v[i+1])
            {
                v.erase(std::remove(v.begin(), v.end(), v[i]), v.end());
                break;
            }
        }

        

    here: ;
    }
}