#include<iostream>
#include<vector>
#define ll long long

using namespace std;

int main(){
    ll n;
    cin >> n;
    vector<int> v;
    ll input;
    int count=0;
    for(int i=0;i<n;i++)
    {
        cin >> input;
        v.push_back(input);
        if(v[i]==1)
        {
            count++;
        }
    }

    count==0?cout << "EASY": cout <<"HARD";

    
}