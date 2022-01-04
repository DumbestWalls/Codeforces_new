#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#define ll long long
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll n,l,r,k;
        cin >> n >> l >> r >> k;
        vector<ll> v;
        for(int i=0;i<n;i++)
        {
            ll input;
            cin >> input;
            v.push_back(input);
        }

        sort(v.begin(),v.end());
        ll count=0;
        ll leftAmount = k;
        for(int i=0;i<v.size();i++)
        {
            if(v.at(i)>=l && v.at(i)<=r)
            {
                
                leftAmount = leftAmount - v.at(i);
                count++;
                if(leftAmount==0)
                {
                    break;
                }
                
                if(leftAmount<0)
                {
                    count--;
                    break;

                    
                }
            }

            
        }

        cout << count << endl;
    }
}