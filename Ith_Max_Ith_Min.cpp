#include<bits/stdc++.h>
using namespace std;
void solve(int *arr,int n){
    sort(arr, arr + n, greater<int>());
    int start = 0, end = n - 1;
    while(start<end){
        cout << arr[start++] << " " << arr[end--]<<" ";
    }
    if(n%2!=0){
        cout << arr[start];
    }
}
int main(){
    int n;
    cin>>n;
    int *arr = new int[n];
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }
    solve(arr, n);
}