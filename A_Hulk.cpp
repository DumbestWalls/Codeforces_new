#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int i=1;
    while(n)
    {
        if(i%2!=0) cout << "I hate ";
        else cout << "I love ";
        
        n--;
        if(n!=0) cout << "that ";
        i++;
        
    }
    cout << "it";

}