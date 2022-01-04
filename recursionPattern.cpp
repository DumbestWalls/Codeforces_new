#include<iostream>
using namespace std;

void pattern(int n)
{
    if(n==0) return 0;
    return pattern(n-1);
    for(int i=1;i<n;i++)
    cout << i << endl;
}

int main()
{
    int n=10;
    pattern(10);
}