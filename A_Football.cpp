#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int main()
{
    int n;
    cin >> n;
    stack<string> s[0];
    for(int i=1;i<=n;i++)
    {
        string input;
        cin >> input;
        if(input == s.top())
        {
            s.push(input);
        }
        else{
            stack<string> s[i];
            s[i].push(input);
        }
    }
    int maxSize=0;
    for(int i=0;i<n;i++)
    {
        if(s[i].size()>maxSize)
        {
            maxSize=s[i].size();

        }
    }

    cout << maxSize;



    

}