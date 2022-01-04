#include<iostream>
using namespace std;
#define ll long long
int main()
{
    ll n,m;
    cin >> n >> m;
    ll arr[m];
    for(int i=0;i<m;i++)
    {
        cin >> arr[i];
    }
    ll count=0;
    ll current_state=1;
    for(int i=0;i<m;i++)
    {
        if(current_state<arr[i]){
        count = count + arr[i]-current_state;
        current_state=arr[i];

        }
        else if(current_state>arr[i])
        {
            count = count + n-current_state + arr[i];
            current_state=arr[i];
        }

        
    }

    cout << count;
}