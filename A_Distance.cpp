#include<iostream>
#define ll long long
 
using namespace std;
 
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll x,y;
        cin >> x >> y;
        ll xC=0,yC=0;
        ll sum=x+y;
        if((x+y)%2!=0) goto hy;
        else if(x==0 && y==0) {cout << x << " " << y << endl; goto here;}
        while(true)
        {
            if(2*(xC+yC)==sum)
            {
                cout << xC << " " << yC << endl;
                break;
            }
            else{
                if(x>y){
                for(yC;yC<=50;yC++)
                {
                    for(xC;xC<=50;xC++)
                    {
                        if(2*(xC+yC)==sum)
                        {
                            cout << xC << " " << yC << endl;
                            goto here;
                        }
                    }
                }}
                else{
                    for(xC;xC<=50;xC++)
                {
                    for(yC;yC<=50;yC++)
                    {
                        if(2*(xC+yC)==sum)
                        {
                            cout << xC << " " << yC << endl;
                            goto here;
                        }
                    }
                }
                    
                }
            } 
        }
 
       hy: cout << -1 << " " << -1 << endl;
        here: ;
    }
}