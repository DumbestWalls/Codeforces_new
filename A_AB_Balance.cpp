#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t)
    {
        string s;
        cin >> s;
        int count = 0;

        for (int i = 0; i < s.length() - 1; i++)
        {
            if (s[i] == 'a' && s[i + 1] == 'b')
            {
                count++;
            }
            if (s[i] == 'b' && s[i + 1] == 'a')
            {
                count--;
            }
        }
        if (count == 0)
        {
            cout << s << endl;
        }
        else if (count == 1)
        {
            for(int i=0;i<s.length()-1;i++)
            {
                cout << s[i];
            }
            cout << "a\n";
        }
        else {
            for(int i=0;i<s.length()-1;i++)
            {
                cout << s[i];
            }
            cout << "b\n";
        }
        t--;
    }
}