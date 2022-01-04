#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int i = 0;
    for (i = 0; i < s.size(); i++)
    {
        if (s[i] == 'A' && s[i + 1] == 'B' && s[i + 2] == 'A')
        {
            for (i = i + 3; i < s.size(); i++)
            {
                if ((s[i] == 'A' && s[i + 1] == 'B') || (s[i] == 'B' && s[i + 1] == 'A'))
                {
                    cout << "YES" << endl;
                    goto here;
                }
            }
        }
        else if (s[i] == 'B' && s[i + 1] == 'A' && s[i + 2] == 'B')
        {
            for (i = i + 3; i < s.size(); i++)
            {
                if ((s[i] == 'A' && s[i + 1] == 'B') || (s[i] == 'B' && s[i + 1] == 'A'))
                {
                    cout << "YES" << endl;
                    goto here;
                }
            }
        }
        else if (s[i] == 'A' && s[i + 1] == 'B')
        {
            for (i = i + 2; i < s.size(); i++)
            {
                if (s[i] == 'B' && s[i + 1] == 'A')
                {
                    cout << "YES" << endl;
                    goto here;
                }
            }
        }
        else if (s[i] == 'B' && s[i + 1] == 'A')
        {
            for (i = i + 2; i < s.size(); i++)
            {
                if (s[i] == 'A' && s[i + 1] == 'B')
                {
                    cout << "YES" << endl;
                    goto here;
                }
            }
        }
    }

    cout << "NO" << endl;


here:;
}