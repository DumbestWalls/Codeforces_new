#include<iostream>

using namespace std;
#include<vector>

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        vector<int> vE;
        vector<int> vO;
        int n;
        cin >> n;
        for(int i=0;i<2*n;i++)
        {
            int input;
            cin >> input;
            if(input%2==0)
            {
                vE.push_back(input);
            }
            else
            {
                vO.push_back(input);
            }
        }

        if(vO.size()==vE.size()) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}