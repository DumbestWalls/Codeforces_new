#include<iostream>

using namespace std;

int main()
{
    int t,n;
    cin >> n >> t;
    string s;
    cin >> s;
    while(t--){
     for(int i=1;i<n;i++)
        {
            if(s[i-1]=='B' && s[i]=='G')
            {
                s[i]='B';
                s[i-1] ='G';
                i++;
            }
        }
        
    }
    cout << s;
}