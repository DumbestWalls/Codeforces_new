#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {   
        int input;
        cin >> input;
        v.push_back(input);
    }
    int min=v.at(0);
    int max=v.at(0);
    int count =0;
    for(int i=1;i<v.size();i++)
    {
        if(v.at(i)<min)
        {
            min = v.at(i);
            count++;
        }
        else if(v.at(i)>max)
        {
            max = v.at(i);
            count++;
        }
    }

    cout << count << endl;
}