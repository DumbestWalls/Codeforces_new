#include<iostream>

#define ll long long

using namespace std;

int main()
{
    ll n;
    cin >> n;
    ll count=0;
    while(n>0){
    if(n>=5)
    {
        count = count + (n/5);
        n = n%5;
    }
    else if(n<5)
    {
        count++;
        break;
    }
    }

    cout << count << endl;
}