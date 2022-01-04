#include<iostream>

using namespace std;
#define ll long long

int main()
{
    ll n;
    cin >> n;
    int count=0;
    while(n>0)
    {   

        if(n%2==0)
        {
            n = n/2;
        }
        else 
        {
            n = (n-1)/2;
            count++;
        }
    }

    cout << count << endl;
}