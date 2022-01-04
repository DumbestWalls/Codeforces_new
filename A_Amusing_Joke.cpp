#include<iostream>
#include<vector>
using namespace std;

int main()
{
    string s1,s2,s3;
    cin >> s1 >> s2 >> s3;

    vector<int> v1(26,0),v2(26,0);
    
    for(int i=0;i<s1.size();i++)
    {
        v1[int(s1[i])-65]=v1[int(s1[i])-65] +1;
        
    }

    for(int i=0;i<s2.size();i++)
    {
        v1[int(s2[i])-65]=v1[int(s2[i])-65] +1;
    }

    for(int i=0;i<s3.size();i++)
    {
        v2[int(s3[i])-65]++;
    }

    
   for(int i=0;i<26;i++)
   {
       if(v1[i]!=v2[i])
       {
           cout << "NO";
           return 0;
       }
   }   

   cout << "YES"; 

   



}