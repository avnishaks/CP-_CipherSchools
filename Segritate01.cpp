#include<bits/stdc++.h>
using namespace std;
void solve(int *arr,int n){
    int start=0;
    int end=n-1;
    while(start<end){
        if(arr[start]==1){
            swap(arr[start],arr[end]);
            end--;
        }
        else{
            start++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    solve(arr,n);
}