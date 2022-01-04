#include<iostream>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        if(n==1)
        {
            cout << "1" << endl;    
        }
        else{ll sum=1;
        int count=1;
        int i=1;
        while(sum<n)
        {
            i=i+2;
            sum = sum+i;
            count++;
        }

        cout << count << endl;
        }
        
    }
}