#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;

    vector<int> v;
    for(int i=0;i<m;i++)
    {
        int input;
        cin >> input;
        v.push_back(input);
    }


    sort(v.begin(),v.end());
    int min=10000;
    for(int i=0;i<m-n+1;i++)
    {
        
       if(v[i+n-1]-v[i]<min)
       min = v[i+n-1]-v[i];
    }

    cout << min;
}