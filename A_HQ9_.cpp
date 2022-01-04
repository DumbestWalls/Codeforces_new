#include<iostream>
#include<string>

using namespace std;

int main()
{
    string p;
    cin >> p;
    int flag=0;
    for(int i=0;i<p.size();i++)
    {
        if(int(p[i])==57 || int(p[i])==72 || int(p[i])==81)
        {
                flag=1;
                break;
        }
    }
    flag==1?cout << "YES":cout <<"NO";

}