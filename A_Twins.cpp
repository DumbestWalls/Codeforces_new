#include<bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    sort(arr,arr+n,greater<int>());
    
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum = sum + arr[i];
    }
    int total= 0;
    int count =0;
        for(int i=0;i<n;i++)
        {
            total = total + arr[i];
            sum = sum - arr[i];
            count++;
            if(total > sum)
            {
                break;
            }
        }
        cout << count;
}