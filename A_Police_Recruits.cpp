#include <iostream>
using namespace std;

#define ll long long

int main() {

ll n;
cin>>n;
ll recruit=0;
ll crime=0;
for(ll i=0;i<n;i++){
	ll x;
	cin>>x;
	if(x>0){
		recruit+=x;
		
	}
	else {
		if(recruit<1){
		crime++;
		}
		else {
			recruit--;
		}
	}
}
cout<<crime << endl;
	return 0;
}