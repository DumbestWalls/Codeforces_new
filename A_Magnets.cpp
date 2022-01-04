#include<iostream>
#include<vector>
#define ll long long
using namespace std;

int main(){
    ll n;
    cin >> n;
    vector<int> v;
    ll input;
    for(int i=0;i<n;i++)
    {
        cin >> input;
        v.push_back(input);
    }
    ll count=0;
    for(int i=0;i<n;i++)
    {
            if(v[i]!=v[i+1])count++;

    }
    cout << count;
}