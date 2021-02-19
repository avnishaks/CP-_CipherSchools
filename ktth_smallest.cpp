#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }
        cout << "Enter the kth number element to find in Array" << endl;
    cin >> k;
    sort(arr, arr + n, greater<int>());
    for (int i = n - k; i < n;i++){
        cout << arr[i] << " ";
    }
}