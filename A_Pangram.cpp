#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    if(s.size()<26) cout << "NO";
    else{
        transform(s.begin(),s.end(),s.begin(),::tolower);
        vector<int> v(26,0);
        for(int i=0;i<s.size();i++)
        {
            v[int(s[i])-97]=1;
        }
        

        for(int i=0;i<26;i++)
        {
            if(v[i]!=1) {cout << "NO";
            return 0;}
        
        }

        cout << "YES";
    }

}