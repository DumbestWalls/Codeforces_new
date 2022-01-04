#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, a, b, c;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < 3; i++)
    {
        int input;
        cin >> input;
        v.push_back(input);
    }
    
    
    sort(v.begin(), v.end());
    if(n%v[0]==0) cout << n/v[0] << endl;
    else
    {
        if(n%v[1]==v[0]) cout << (n/v[1])+1 << endl;

        else if(n%v[2]==v[1] || n%v[2]==v[0]) cout << (n/v[2])+1 << endl;

        else if(n%v[2]==(v[0]+v[1])) cout << (n/v[2]) + 2 << endl;

        else if((n%v[0]+v[0])%v[1]==0) cout << n/v[0] << endl;

    }
}