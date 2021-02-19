#include<bits/stdc++.h>
using namespace std;
int fidx(int *arr,int l,int h,int x,int n){
    if(h>=l){
        int mid = l + (h - l) / 2;
        if((mid==0||x>arr[mid-1])&&arr[mid]==x)
        {
           return mid;
        } 
        else if(x>arr[mid]){
            return fidx(arr, (mid + 1), h, x, n);
        }
        else{
            return fidx(arr, l, (mid - 1), x, n);
        }
    }
    return -1;
}
int lidx(int *arr,int l,int h,int x,int n){
    if(h>=l){
        int mid = l + (h - l) / 2;
        if((mid==n-1||x<arr[mid+1])&&arr[mid]==x){
            return mid;
        }
        else if(x<arr[mid+1]){
            return lidx(arr, l, mid - 1, x, n);
        }
        else{
            return lidx(arr, mid + 1, h, x, n);
        }
    }
    return -1;
}
int main(){
    int n,search;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }
    cout << "Enter the value of which you wana find first and last idx" << endl;
    cin >> search;
    cout << fidx(arr,0,n-1,search,n) << endl;
    cout << lidx(arr,0,n-1,search,n) << endl;
}