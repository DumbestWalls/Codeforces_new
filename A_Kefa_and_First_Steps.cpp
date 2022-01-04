#include<iostream>
#define ll long long

using namespace std;

int main()
{
    ll n;
    cin >> n;
    ll arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    int count =1;
    int maxsize=1;
    for(int i=1;i<n;i++)
    {
        while(arr[i-1]<=arr[i] && i<n)
        {
            count++;
            i++;
        }
        if(count > maxsize)
        {
            maxsize = count;
        }
        count = 1;
    }

    cout  << maxsize;
}