#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n+1];
    int input;
    for(int i=1;i<=n;i++)
    {
        cin >>input;
        arr[input]=i; 
    }

    for(int i=1;i<=n;i++)
    {
        cout << arr[i]<< " ";
    }

    

}