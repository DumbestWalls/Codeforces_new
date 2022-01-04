#include<iostream>
#define ll long long
using namespace std;
#include<utility>
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
        vector<pair<int,int>> v;
        vector<int> vMax;
        for(int i=1;i<=n;i++)
        {
            ll a,b;
            ll countA=0;
            ll countB=0;
            cin >> a >> b;
            v.push_back(make_pair(a,b));
            
            if(b==0)
            {
                countA= i+a;
                countB=1;
                vMax.push_back(countA);
                goto here;
            }
            countA = i+a;
            
            countB=i+b;
           
            if(countA<countB)
            {
            vMax.push_back(countA);
            }
            else vMax.push_back(countB);
             here:;
        }

        sort(vMax.begin(),vMax.end());
        cout << vMax[0] << endl;



    }
}