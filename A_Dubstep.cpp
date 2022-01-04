#include<iostream>

using namespace std;

int main()
{
    string s;
    int f=0;
    cin >> s;
    int count=0;
    for(int i=0;i<s.size();i++)
    {   f=0;
        while(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
        {
            i=i+2;
            count++;
            f=1;
           
        }
        if (f==1)
        {
        cout<<" ";
        }
        else{
           cout << s[i];
           }

       
        
    }
}