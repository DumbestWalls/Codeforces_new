#include <iostream>
#include <string>
#include <cstdlib>
#include <unordered_set>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s;
        cin >> s;
        string f;
        cin >> f;
        int sum=0;
        if (f.size() == 1)
        {
            int comp = f[0];
            int n = s.size();
            for (int i = 0; i < n; i++)
            {
                int temp = s[i];
                int dif = abs(temp - comp);
                if (dif > 13)
                    dif = 26 - dif;
                sum = sum + dif;
            }
        }
        else
        {
            set<char> F;
            for (int i = 0; i < f.size(); i++)
            {
                F.insert(f[i]);
            }
            int n = s.size();
            for (int i = 0; i < n; i++)
            {
                char c = s[i];
                if (!(F.count(c)))
                {
                    int min = -1000;
                    for (char s : F)
                    {
                        int temp = abs(c - s);
                        if (temp > 13)
                            temp = 26 - temp;
                        if (temp < min)
                            min = temp;
                    }
                    sum = sum + min;
                }
            }
        }

        cout << "Case #" << (i + 1) << ": " <<  sum;
    }
}
