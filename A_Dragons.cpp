#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>
#define ll long long
using namespace std;
 
 
int main()
{
   
   ll s,n;
   cin >> s >> n;
 
   pair<ll,ll> arr[n];
 
   for(int i=0;i<n;i++)
   {
       cin >> arr[i].first >> arr[i].second;
   }
    // sorting pairs on the basis of first element in the pair.
   sort(arr,arr+n);
    bool isTrue = true;
   
   for(int i=0;i<n;i++)
   {
       if(s<=arr[i].first)
       {
           isTrue = false;
           break;
       }
       else{
           s = s + arr[i].second;
       }
   }
 
   isTrue?cout << "YES":cout << "NO"; 
}


/*
#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;
int main(){
  cin.tie(0);
  ios_base::sync_with_stdio(false);
  int s,n,x,y;
  cin>>s>>n;
  vector<pair<int,int>> v;
  for(int i=0;i<n;i++){
    cin>>x>>y;
    v.push_back(make_pair(x,y));
  }
  sort(v.begin(),v.end());
  for(int i=0;i<n;i++){
    if(v[i].first>=s){
      cout<<"NO";
      return 0;
    }
    s+=v[i].second;
  }
  cout<<"YES";
  return 0;
}
*/