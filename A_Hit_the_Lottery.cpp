#include<iostream>

#define ll long long

using namespace std;

int main()
{
    ll n;
    cin >> n;
    int count=0;
    while(n>0)
    {
        if(n/100)
        {
            count = count + n/100;
            n=n%100;
            
        }
        else if(n/20&& n<100)
        {
            count = count + n/20;
            n=n%20; 
          
        }
        else if(n/10 && n<20)
        {
            count =count +  n/10;
            n=n%10; 
            
        }
        else if(n/5&& n<10) {
            count = count + n/5;
            n=n%5;
            }
        else if(n<5) {count = count + n; break;}
    }

    cout << count;
}