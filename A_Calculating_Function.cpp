#include<iostream>
#define ll long long

using namespace std;

int main(){
    ll n;
    cin >> n;

    n%2==0?cout << n/2:cout << (n/2)-n ;
}