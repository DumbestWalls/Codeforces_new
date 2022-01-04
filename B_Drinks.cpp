#include<iostream>
#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    int n;
    cin >> n;
    int  arr[n];
    double count=0;
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
        count = count + arr[i];
    }

    cout << fixed << setprecision(12) << count /(double)n;

}