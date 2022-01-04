#include<iostream>

using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=1;i<=n;i++)
    {
        cin >> arr[i];
    }
    int max=0,min=101,maxi=0,mini=0;

    for(int i=1;i<=n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            maxi=i;
        }

        if(arr[i]<=min)
        {
            min=arr[i];
            mini=i;
        }
    }
  
    if(maxi>mini)
    {
        cout << (maxi-1)+(n-mini) -1;
    }
    else cout << (maxi-1) +(n-mini);
}