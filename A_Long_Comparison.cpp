#include <iostream>
#define ll long long

using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        string x1,x2;
        int p1,p2;
        cin >> x1 >> p1;
        cin >> x2 >> p2;

        if(x1.size()+p1 > x2.size()+p2) cout <<">" << endl;
        else if(x1.size()+p1<x2.size()+p2) cout << "<" << endl;
        else{

                for(int i=0;i<p1-p2;i++)
                x1.push_back('0');
                for(int i=0;i<p2-p1;i++)
                x2.push_back('0');
            

            for(int i=0;i<x1.size();i++)
                {
                    if(x1[i]>x2[i])
                    {
                        cout << ">" <<endl;
                        goto here;
                    }
                    if(x1[i]<x2[i])
                    {
                        cout <<"<" << endl;
                        goto here;
                    }
                }
            cout << "=" << endl;
            here:;
        }



    }
}