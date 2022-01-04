#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        string s;
        cin >> s;
        int count = 0;
        int points = 0;
        if(b>0)
        {
            points = (a + b) * n;
            cout << points << endl;
        }
        else
        {
            for (int i = 1; i < n; i++)
            {
                if (s[i] != s[i - 1])
                {
                    count++;
                }
            }
            count++;

            points = (a)*n + ((count / 2) + 1) * b;
            cout << points << endl;
        }
    }
}