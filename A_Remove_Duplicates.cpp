#include<iostream>
#include<vector>
#include<array>
using namespace std;

int main()
{
    int n;
    cin >>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int input;
        cin >> input;
        v.push_back(input);
    }
    array<int,1001> arr={0};
    vector<int> v1;
    for(int i=v.end();i>v.begin();i--)
    {
        if(arr[i]==0)
        {
            v1.push_back();
            arr[i]=1;
        }
    }

    reverse(v1.begin(),v1.end());
    for(int i=0;i<v1.size();i++)
    {
        cout << v1[i] << " ";
    }

    

}