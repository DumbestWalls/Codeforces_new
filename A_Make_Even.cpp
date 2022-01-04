#include<iostream>
#define ll long long 
using namespace std;
#include<vector>
#include<algorithm>
int main()
{
    ll t;
    cin >> t;
   
    while(t--)
    {
        ll n;
        cin >> n;
        if(n%2==0)
        {
            cout << 0 << endl;
        }
        else 
        {
            vector<ll> v;
            while(n>0)
            {
                ll digit=n%10;
                v.push_back(digit);
                n=n/10;
            }
            reverse(v.begin(),v.end());
            int flag=0;
            for(int i=0;i<v.size();i++)
            {
                if(v[i]%2==0)
                {
                  flag =1;
                  break;  
                }
            }
            if(v[0]%2==0) cout << 1 << endl;
            else if(flag== 1 && v[0]%2!=0) cout << 2 << endl;
            else if(flag==0) cout << -1 << endl; 
        }
    }
}