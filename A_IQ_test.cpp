#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        v.push_back(input);
    }

          if (v[0] % 2 == 0 && v[1] % 2 != 0)
        {
            if (v[2] % 2 == 0)
            {
                cout << 2;
                
            }
            else
            {
                cout << 1;
            }
        }
        else if (v[0] % 2 != 0 && v[1] % 2 == 0)
        {
            v[2] % 2 != 0 ? cout << 2 : cout << 1;
        }
        else{
    for (int i = 2; i < v.size(); i++)
    {
        if (v[0] % 2 == 0 && v[1] % 2 == 0)
        {
            if (v[i] % 2 != 0)
            {
                cout << i + 1;
                break;
            }
        }
        else if (v[0] % 2 != 0 && v[0] % 2 != 0)
        {
            if (v[i] % 2 == 0)
            {
                cout << i + 1;
                break;
            }
        }
    }
        }
}
