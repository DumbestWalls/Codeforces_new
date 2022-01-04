#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,h;
    cin >> n >> h;
    vector<int> v;
    int width=0;
    int input;
    for(int i=0;i<n;i++)
    {
        cin >> input;
        v.push_back(input);
    }

    for(int i=0;i<n;i++)
    {
        if(v[i]>h)
        {
            width = width +2;
        }
        else{
            width = width + 1;
        }
    }

    cout << width;
}
