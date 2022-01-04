#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    string s;
    cin >> s;
    transform(s.begin(),s.end(),s.begin(),::tolower);
    vector<char> v;

    for(int i=0;i<s.size();i++)
    {
        if(s[i]!='a' && s[i]!='u' && s[i]!='o'&& s[i]!='e' && s[i]!='i' && s[i]!='y')
        {
            v.push_back('.');
            v.push_back(s[i]);

        }

    }
    for(int i=0;i<v.size();i++)
    {
        cout << v[i];
    }
}