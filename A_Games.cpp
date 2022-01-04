#include<iostream>
#include<utility>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++)
    {
        int home,ground;
        cin >> home >> ground;
        v.push_back(make_pair(home,ground));

    }
    int count=0;
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v.size();j++)
        {
            if(v[i].first==v[j].second)
            {
                count++;
            }
        }
    }

    cout << count;
}