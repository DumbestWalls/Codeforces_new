#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    char stone[n];
    char first[1];
    cin >> stone;
    int i;
    int count=0;
    first[0]=stone[0];
    
    for(i=0;i<n;i++)
    {
        if(stone[i]== stone[i+1] && stone[0]==first[0])
        {
            count++;
            
        }

    }
    cout<< count;
}