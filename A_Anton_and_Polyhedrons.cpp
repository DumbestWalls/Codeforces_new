#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int count =0;
    while(n--)
    {   int i=0;
        string s;
        cin >> s;

       if(s[i]=='I') count+=20;
       else if(s[i]=='C') count+=6;
       else if(s[i]=='T') count+=4;
       else if(s[i]=='D') count+=12;
       else if(s[i]=='O') count+=8;

       i++;
    }

     cout << count;

    
}