#include<iostream>

using namespace std;

int main(){
    int arr[5][5];
    for(int i=0;i<5;i++)
    {for(int j=0;j<5;j++)
    {
        cin>>arr[i][j]; 
    }
    cout<<endl;
    }
    int i,j;
    for(i=0;i<5;i++)
    for(j=0;j<5;j++)
    {
        if(arr[i][j]==1)
        goto start;
    }

    start:int count=0;

    if(i==2 && j==2)
    {
        cout<<count;
    }
    else{

    while(j<2)
    {
        arr[i][j+1]=arr[i][j];
        count++;
        j++;
    }
    while(j>2)
    {
        arr[i][j-1]=arr[i][j];
        count++;
        j--;
    }
    while(i<2)
    {
        arr[i+1][j]=arr[i][j];
        count++;
        i++;
    }
    while(i>2)
    {
        arr[i-1][j]= arr[i][j];
        count++;
        i--;
    }
    
    cout<<count;
    }

}