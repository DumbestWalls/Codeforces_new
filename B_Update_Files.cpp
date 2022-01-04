#include<iostream>

#define ll long long

using namespace std;

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n,k;
        cin >> n >> k;
        ll ck=1;
        ll cn=1;
        ll count=0;
        while(cn<n)
            {
                if(ck<k)
                {
                    ck++;
                    cn=cn*2;
                    count++;
                }
                else{
                    cn=cn + k;
                    count++;
                }
                
               
            }
        cout << count << endl;    
        

    }
}