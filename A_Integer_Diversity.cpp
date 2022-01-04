

#include<iostream>

#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
       
        cin >> n;
        int arr[201];
        for(int i=0;i<201;i++)
        {
            arr[i]=0;
        }

        for(int i=0;i<n;i++)
        {
            int input;
            cin >> input;
            arr[100+input]++;
            if(arr[100+input]>1)
            {
                arr[100-input]++;
            }
        }
        int count=0;
        for(int i=0;i<201;i++)
        {
            if(arr[i]>=1){
                count++;
            }
            
        }

        cout << count << endl;
    }
}