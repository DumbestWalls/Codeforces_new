#include<iostream>
#define ll long long

using namespace std;

int main()
{
    int n,k;
    cin >> n >> k;
    int timeLeft = 240 -k;
    int count =0;
    for(int i=1;i<=n;i++)
    {
        timeLeft = timeLeft - 5*i;
        if(timeLeft>=0)
        {
            count++;
        }
    }
    cout << count;
    
}