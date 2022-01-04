#include<iostream>
#include<cctype>
using namespace std;

int main()
{
    string s;
    cin >> s;
    
    bool c=true;

    for(int i=1;i<s.size();i++)
    {
        if(islower(s[i]))
        {
            c=false;
            break;
        }
    }
    if(c)
    {
        for(int i=0;i<s.size();i++)
        {
            if(islower(s[i]))
            {
                s[i]=toupper(s[i]);
            }
            else{
                s[i]=tolower(s[i]);
            }
        }

        cout << s;
    }
    else cout << s;

}