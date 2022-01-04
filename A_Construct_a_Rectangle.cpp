#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    
    while(t--)
    {
        vector<ll> v;
        for(int i=0;i<3;i++)
        {
            ll input;
            cin >> input;
            v.push_back(input);
        }

        sort(v.begin(),v.end());
        if(v[0]==v[1] && v[2]%2==0)
        {
            cout << "YES" << endl;
        }
        else if(v[1]==v[2] && v[0]%2==0)
        {
            cout << "YES" << endl;
        }
        else if((v[0]+v[1])==v[2])
        {
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
        
    }
}