#include<iostream>
#include<cmath>
#define ll long long

using namespace std;

int main()
{
    ll n,m,a,result;
    cin >> n>>m>>a;
    result =0;
    result = n%a==0?n/a:n/a +1;
    result = result * (m%a==0?m/a:m/a+1);

    cout << result;
}