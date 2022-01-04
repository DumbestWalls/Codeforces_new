#include<iostream>


using namespace std;

int main(){
    string user;
    cin >> user;

    int freq[26]={ };
    int x;
    for(int i=0;i<user.size();i++)
    {
        x = int(user[i])-97;
        freq[x]=freq[x]+1;
    }
    int count=0;
    for(int i=0;i<26;i++)
    {
        if(freq[i]!=0)
        {
            count = count + 1;
        }
    }

    if(count%2==0)
    {
        cout << "CHAT WITH HER!";
    }
    else{
        cout << "IGNORE HIM!";
    }

}
