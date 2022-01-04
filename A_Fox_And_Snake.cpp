#include<iostream>

using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    int i=1;
    while(n--)
    {
        
        if(i%4==0)
        {
            cout << "#";
            for(int i=1;i<m;i++)
            cout << ".";
            cout << endl;
        }
        else if(i%2==0)
        {
            for(int i=0;i<m-1;i++)
            {
                cout << ".";
            }
            cout << "#" << endl;
        }
        else 
        {
            for(int i=0;i<m;i++)
            cout << "#";
            cout << endl;
        }
        i++;
    }
}