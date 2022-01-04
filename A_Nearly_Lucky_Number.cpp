#include<iostream>
#include<string>

#define ll long long

using namespace std;

int main(){
    ll n;
    cin >> n;
    string s = to_string(n);
    int count=0;
   
    for(int i=0;i<s.size();i++){
        if(s[i]=='4' || s[i]=='7'){
            count++;
        }
    }

    if(count == 4 || count==7)
    {
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}