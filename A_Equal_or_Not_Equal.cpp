#include<iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t>0)
    {
        string s;
        cin >> s;
        int count=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='N')
            {
                count++;
            }
        }
        if((count==0 || count>1))
        {
            cout <<"YES" <<endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        t=t-1;
    }
}