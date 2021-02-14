#include<bits/stdc++.h>
using namespace std;
// We can perform this task using the Moore Voting Algo.
int findcand(int *arr,int n){
    int major_idx = 0, count = 1;
    for (int i = 0; i < n;i++){
        if(arr[major_idx]==arr[i])
        {
            count++;
        }
        else{
            count--;
        }
        if(count==0){
            major_idx = i;
            count = 1;
        }
    }
    return arr[major_idx];
}
bool nby2_checker(int *arr,int n,int cand){
    int cnt = 0;
    for (int i = 0; i < n;i++){
        if(cand==arr[i])
            cnt++;
    }
    if(cnt>n/2){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }
    int cand = findcand(arr, n);
    if(nby2_checker(arr,n,cand)){
        cout << " " << cand << " ";
    }
    else{
        cout << "Not Found! "
             << "\n";
    }

}