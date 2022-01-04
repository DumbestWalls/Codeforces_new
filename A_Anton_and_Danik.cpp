#include<iostream>
#include<string>
#define ll long long
using namespace std;

int main(){
    ll n;
    cin >> n;
    string s;
    cin >> s;
    int count=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='A')
        {
            count++;
        }
        else{
            count--;
        }
    }

    if(count==0)
    {
        cout << "Friendship";
    }
    else if(count>0)
    {
        cout << "Anton";
    }
    else{
        cout << "Danik";
    }
}