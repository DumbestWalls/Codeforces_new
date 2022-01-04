#include<iostream>

using namespace std;

int main()
{
    string s,a="hello";
    cin >> s;
    int j=0,sz=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==a[j])
        {
            j++;
            sz++;

            if(sz==5)
            break;
        }
    }

    sz==5?cout << "YES":cout <<"NO";



}