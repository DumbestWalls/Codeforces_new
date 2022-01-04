#include <iostream>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    int arr[n];
    int sum = 0;

    for(int i = 0; i < n-1; i++) cin >> arr[i];

    while(sum < t-1) sum += arr[sum];

    (sum == t-1)? cout << "YES":cout << "NO";
   
}