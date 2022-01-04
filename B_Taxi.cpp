#include<iostream>
#define ll long long

using namespace std;

int main()
{
    ll n;
    cin >> n;
    ll count1=0,result1=0;
    ll count2=0,result2=0;
    ll count3=0,result3=0;
    ll count4=0,result4=0;

    for(int i=0;i<n;i++)
    {
        ll input;
        cin >> input;
        if(input==4) count4++;
        else if(input==3) count3++;
        else if(input==2)count2++;
        else if(input==1) count1++;
    }

    result4= count4;
    result3 = count3;
    count1 = count1 - count3;
    if(count1<0) count1=0;
    count1 = count1 + count2*2;
    if(count1%4==0)
    {
        result1 = count1/4;
    }
    else{
        result1 = count1/4 +1;
    }
    
    cout << result1 + result3 + result4;
}