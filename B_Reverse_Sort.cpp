#include<iostream>
#include<vector>
#define ll long long

using namespace std;

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin>> n;
        ll arr[n];
        vector<int> v;

        for(int i=0;i<n;i++)
        {
            cin >> arr[i];
        }
        int k=0;
        int i=1;
        for(i=1;i<n;i++)
        {
            if(arr[i-1]>arr[i])
            {
                k++;
                v.push_back(i);
                break;
            }
        }
        while(i<n)
        {
            if(arr[i]==1)
            {
                k++;
                v.push_back(i);
            }
            i++;
        }

        cout << k;
        for(int i=0;i<n;i++)
        {
            cout << v[i] ;
        }

        cout << endl;

    }
}