#include<iostream>

using namespace std;

int main()
{
    int m,n;
    cin >> m >> n;
    int ip=0;
    while(m>0 && n>0)
    {   ip++;
        if(m>=n)
        {
           
           n--;
        }
        else{
          
            m--;
        }
        
    }

    if(ip%2==0) cout << "Malvika";
    else cout << "Akshat";
}