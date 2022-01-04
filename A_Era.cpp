#include<iostream>
using namespace std;
#define ll long long int
int main()
{
    ll t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<"1"<<" "<<"1"<<" ";
        ll ans=2,x=n-1;
        for(i=1;i<=x;i++)
        {
            cout<<ans<<" ";
            ans=ans*2;
        }
        cout<<endl;
    }
}