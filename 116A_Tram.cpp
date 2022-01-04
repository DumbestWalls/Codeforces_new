#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n],b[n];
    int require[n];
    a[0]=b[n-1]=0;
    int max=-10000;
    for(int i=0;i<n;i++){
        require[i]=0;
    }

    for(int i=0;i<n;i++)
    {
        cin >> a[i] >> b[i];
        cout << endl;
    }
        require[0]= require[0]+b[0]-a[0];
        if(require[0]>max){
            max = require[0];
        }
    for(int i=1;i<n;i++)
    {
        require[i]=require[i-1]+b[i]-a[i];
        if(require[i]>max){
            max = require[i];
        }
    }
    
    cout << max ;
    


}